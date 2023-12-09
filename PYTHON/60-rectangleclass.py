class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)


r1 = Rectangle(10, 5)
r2 = Rectangle(15, 2)

print("Area of r1:", r1.area())
print("Perimeter of r1:", r1.perimeter())

print("Area of r2:", r2.area())
print("Perimeter of r2:", r2.perimeter())

if r1.area() < r2.area():
    print("r2 has larger area")
else:
    print("r1 has larger area")
