use <../assets/batteryCustom.scad>
use <../assets/ESP8266Models.scad>
use <../components/BottomComponent.scad>
use <../components/TopComponent.scad>
use <../pieces/subpieces/breadboard.scad>
include <../configurations/global.scad>
include <../assets/usb-charger/configurations.scad>
use <../assets/usb-charger/usb-charger.scad>

module SoundRollComponent(
    top_component_position = sound_roll_component_top_component_position,
    bottom_component_position = sound_roll_component_bottom_component_position,
    battery_custom_position = sound_roll_component_battery_custom_position,
    top_facade_piece_z = top_component_top_facade_piece_z
) {

    translate([0, -30, 0])
        rotate([0,180,0])
            WemosD1M(pins=2);

    translate(bottom_component_position)
        BottomComponent();

    translate(top_component_position)
        rotate([0,180,0])
        translate([0,0,top_facade_piece_z])
            TopComponent();

    translate(battery_custom_position)
        batteryCustom();

    usbCharger();
}

SoundRollComponent();
