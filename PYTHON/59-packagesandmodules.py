from graphics.rectangle import area as r_area, perimeter as r_perimeter
from graphics.circle import area as c_area, perimeter as c_perimeter
from graphics.dgraphics.cuboid import area as cu_area, volume as cu_volume
from graphics.dgraphics.sphere import area as s_area, volume as s_volume

l_rect = 5
b_rect = 3
print(f"Rectangle Area: {r_area(l_rect, b_rect)}")
print(f"Rectangle Perimeter: {r_perimeter(l_rect, b_rect)}")

r_circle = 4
print(f"Circle Area: {c_area(r_circle)}")
print(f"Circle Perimeter: {c_perimeter(r_circle)}")

l_cuboid = 4
b_cuboid = 3
h_cuboid = 2
print(f"Cuboid Area: {cu_area(l_cuboid, b_cuboid, h_cuboid)}")
print(f"Cuboid Volume: {cu_volume(l_cuboid, b_cuboid, h_cuboid)}")

r_sphere = 3
print(f"Sphere Area: {s_area(r_sphere)}")
print(f"Sphere Volume: {s_volume(r_sphere)}")
