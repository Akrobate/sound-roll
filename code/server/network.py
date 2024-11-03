import socket

def is_port_in_use(port, host='127.0.0.1'):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        return s.connect_ex((host, port)) == 0

ports = range(1024, 49152)
for port in ports:
	if is_port_in_use(port):
		print(f"Le port {port} est libre.")
