use <../pieces/knobFacadeBPiece.scad>
use <../pieces/TopFacadePiece.scad>
include <../configurations/global.scad>

module TopComponent(
) {
    TopFacadePiece();
    knobFacadeBPiece();
}

TopComponent();
