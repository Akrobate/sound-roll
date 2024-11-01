import gi
gi.require_version("Gtk", "3.0")
from gi.repository import Gtk

class SimpleWindow(Gtk.Window):
    def __init__(self):
        super().__init__(title="Fenêtre Simple GTK")
        self.set_border_width(10)
        self.set_default_size(300, 200)

        # Création d'une boîte verticale pour organiser les widgets
        vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL, spacing=10)
        self.add(vbox)

        # Création d'un champ de texte
        self.entry = Gtk.Entry()
        self.entry.set_text("Tapez ici...")
        vbox.pack_start(self.entry, False, False, 0)

        # Création d'une étiquette
        self.label = Gtk.Label(label="Ceci est une étiquette.")
        vbox.pack_start(self.label, False, False, 0)

        # Création d'un bouton
        self.button = Gtk.Button(label="Cliquez moi")
        self.button.connect("clicked", self.on_button_clicked)
        vbox.pack_start(self.button, False, False, 0)

    def on_button_clicked(self, widget):
        # Action lorsque le bouton est cliqué
        text = self.entry.get_text()
        self.label.set_text(f"Vous avez saisi : {text}")

# Création et affichage de la fenêtre
win = SimpleWindow()
win.connect("destroy", Gtk.main_quit)
win.show_all()
Gtk.main()