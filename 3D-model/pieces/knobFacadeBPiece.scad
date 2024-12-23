include <../configurations/global.scad>;

module knobFacadeBPiece(
    height = knob_facade_b_piece_height,
    diameter = knob_facade_b_piece_diameter,
    wall_thickness = knob_facade_b_piece_wall_thickness
) {
    difference() {
        cylinder(h = height, d = diameter, $fn=100);
        translate([0, 0, -1])
        cylinder(h = height + 2, d = diameter - wall_thickness, $fn=100);
    }
}

knobFacadeBPiece();
