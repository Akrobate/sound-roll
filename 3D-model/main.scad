use <./assets/batteryCustom.scad>
use <./assets/ESP8266Models.scad>
use <./components/BottomComponent.scad>

translate([0, -30, 0])
    rotate([0,180,0])
        WemosD1M(pins=2);

BottomComponent();

translate([- 75.5 / 2, -21.4 / 2, 0])
    batteryCustom();
