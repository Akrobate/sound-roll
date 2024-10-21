use <./components/batteryCustom.scad>
use <./assets/ESP8266Models.scad>

module body(
    height = 20,
    diameter = 20
) {
    difference() {
        wall_thickness = 1;
        cylinder(h = height, d = diameter, $fn=100);
        
        translate([0, 0, -1])
        cylinder(h = height + 2, d = diameter - wall_thickness, $fn=100);
    }
}

translate([0, -30, 0])
    rotate([0,180,0])
        WemosD1M(pins=2);


body(height = 20, diameter = 100);

translate([- 75.5 / 2, -21.4 / 2, 0])
    batteryCustom();
