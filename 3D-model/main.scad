use <./assets/batteryCustom.scad>
use <./assets/ESP8266Models.scad>
use <./components/BottomComponent.scad>
use <./components/TopComponent.scad>

include <configurations/global.scad>

module main(
    top_component_position = main_top_component_position,
    bottom_component_position = main_bottom_component_position,
    battery_custom_position = main_battery_custom_position
) {

    translate([0, -30, 0])
        rotate([0,180,0])
            WemosD1M(pins=2);

    translate(bottom_component_position)
        BottomComponent();

    translate(top_component_position)
        TopComponent();

    translate(battery_custom_position)
        batteryCustom();
}


main();
