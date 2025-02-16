use <../pieces/knobFacadeBPiece.scad>
use <../pieces/TopFacadePiece.scad>
include <../configurations/global.scad>

module TopComponent(
    top_facade_piece_z = top_component_top_facade_piece_z
    
) {
    
        translate([0, 0, top_facade_piece_z]) {
            TopFacadePiece();
            knobFacadeBPiece();
        }
    
}

TopComponent();
