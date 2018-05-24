import math
class Circle(object):
	def __init__(self, radius):
		self.radius = radius
	def __str__(self):
		return "Radius = " + str(self.radius)
	def getArea(self):
		return math.pi * (self.radius ** 2)
	def getPerimeter(self):
		return  2 * math.pi * self.radius
circ = Circle(3)
print(circ)
print("Perimeter of Circle = ", circ.getPerimeter())
print("Area of Circle = ", circ.getArea())
