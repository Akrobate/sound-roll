import socket

class Network:
    def __init__(self):
        self.host = '0.0.0.0'
        self.port_range = range(1024, 49152)

    def is_port_in_use(port):
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            return s.connect_ex((selft.host, port)) == 0

    def find_available_port(self):
        for port in self.port_range:
            if not self.is_port_in_use(port):
                return port
        return None
