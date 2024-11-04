from zeroconf import ServiceBrowser, Zeroconf

class MyListener:
    def add_service(self, zeroconf, type, name):
        print(f"Service ajouté : {name}")

    def remove_service(self, zeroconf, type, name):
        print(f"Service retiré : {name}")

zeroconf = Zeroconf()
listener = MyListener()
browser = ServiceBrowser(zeroconf, "_http._tcp.local.", listener)

try:
    input("Appuyez sur Entrée pour quitter...\n\n")
finally:
    zeroconf.close()