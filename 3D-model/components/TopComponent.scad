use <../pieces/knobFacadeBPiece.scad>
use <../pieces/TopFacadePiece.scad>

module TopComponent() {
    knobFacadeBPiece();
    TopFacadePiece();
}

TopComponent();