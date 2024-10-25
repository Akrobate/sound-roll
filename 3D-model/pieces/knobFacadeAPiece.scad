module knobFacadeAPiece(
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

knobFacadeAPiece();