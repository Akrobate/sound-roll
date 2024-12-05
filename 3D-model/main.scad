use <./assets/batteryCustom.scad>
use <./assets/ESP8266Models.scad>
use <./components/BottomComponent.scad>
use <./components/TopComponent.scad>


module main(
    top_component_position = [0,0,50],
    bottom_component_position = [0,0,0]
) {

    translate([0, -30, 0])
        rotate([0,180,0])
            WemosD1M(pins=2);

    translate(bottom_component_position)
        BottomComponent();

    translate(top_component_position)
        TopComponent();

    translate([- 75.5 / 2, -21.4 / 2, 0])
        batteryCustom();
}


main();
