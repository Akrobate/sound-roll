use <./assets/batteryCustom.scad>
use <./assets/ESP8266Models.scad>
use <./pieces/knobFacadeAPiece.scad>
use <./pieces/knobFacadeBPiece.scad>

translate([0, -30, 0])
    rotate([0,180,0])
        WemosD1M(pins=2);

knobFacadeAPiece(height = 20, diameter = 100);

translate([- 75.5 / 2, -21.4 / 2, 0])
    batteryCustom();
