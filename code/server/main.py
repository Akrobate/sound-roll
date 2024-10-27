from flask import Flask, request
import os
import subprocess

app = Flask(__name__)

def set_volume(action):
    if action == "up":
        os.system("pactl set-sink-volume @DEFAULT_SINK@ +5%")
    elif action == "down":
        os.system("pactl set-sink-volume @DEFAULT_SINK@ -5%")
    elif action == "mute":
        os.system("pactl set-sink-mute @DEFAULT_SINK@ toggle")

    volume = get_current_volume()
    return f"Volume {action}. Niveau actuel : {volume}%"


def get_current_volume():
    result = subprocess.run(
        ["pactl", "get-sink-volume", "@DEFAULT_SINK@"],
        capture_output=True, text=True
    )
    output = result.stdout
    volume_percent = output.split('/')[1].strip().replace('%', '')
    return volume_percent

@app.route('/volume', methods=['GET'])
def volume():
    action = request.args.get('action')
    if action in ["up", "down", "mute"]:
        return set_volume(action)
    else:
        return "Invalid action. Use 'up', 'down', or 'mute'."

if __name__ == "__main__":
    app.run(host='0.0.0.0', port=5000, debug=False)
