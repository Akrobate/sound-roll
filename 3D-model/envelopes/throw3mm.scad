include <../configurations/global.scad>

module throw3mm(
    diameter = throw_3mm_diameter,
) {
    cylinder(d = diameter, h = 10, center = true);
}