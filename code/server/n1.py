import pystray
import PIL.Image

def on_clicked(icon, item):
    print("Hello")

image = PIL.Image.open("icon.png")
tray = pystray.Icon("Tray", image, menu=pystray.Menu(
    pystray.MenuItem("Button-1", on_clicked)
))
tray.run()

