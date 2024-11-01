import gi
gi.require_version('AppIndicator3', '0.1')
from gi.repository import AppIndicator3, Gtk

def on_clicked(source):
    print("Hello")

# Création de l'indicateur
indicator = AppIndicator3.Indicator.new(
    "example-simple-indicator",
    "network-transmit-receive",  # Icône par défaut
    AppIndicator3.IndicatorCategory.APPLICATION_STATUS
)
indicator.set_status(AppIndicator3.IndicatorStatus.ACTIVE)

# Création du menu
menu = Gtk.Menu()
item = Gtk.MenuItem(label="Button-1")
item.connect("activate", on_clicked)
menu.append(item)

# Ajout d'une option pour quitter
item_quit = Gtk.MenuItem(label="Quitter")
item_quit.connect("activate", Gtk.main_quit)
menu.append(item_quit)

menu.show_all()
indicator.set_menu(menu)

# Boucle principale GTK
Gtk.main()