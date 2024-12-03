include <../configurations/global.scad>;

module TopFacadePiece(
    z_size = top_facade_piece_z_size,
    diameter = top_facade_piece_z_diameter,
) {
    cylinder(h = z_size, d = diameter, $fn=100);
}


TopFacadePiece();