import math
class Shape(object):
	def __eq__(self, other,):
		return  self.area() == other.area()
	def __lt__(self, other):
		return self.circum() < other.circum()
	
class Rectangle(Shape):
	def __init__(self, length, width):
		self.length = length
		self.width = width
	def circum(self):
		return 2 * (self.length + self.width)
	def area(self):
		return self.length * self.width
	def __str__(self):
		return "This is Rectangle, which Area = " + str(self.length * self.width) 

class Square(Rectangle):
	def __init__(self,length):
		Rectangle.__init__(self,length,length)
	def __str__(self):
		return "This is Square, which Length = " +str(self.length)

class Circle(Shape):
	def __init__(self, radius):
		self.radius = radius
	def circum(self):
		return 2 * math.pi * self.radius
	def area(self):
		return math.pi * (self.radius ** 2)
	def __lt__(self, other):
		return self.radius < other.radius
	def __str__(self):
		return "This is Circle, which Diameter = " + str(2 * self.radius)

square1 = Square(3)
print(square1)
print "Perimeter of square1 is ",square1.circum()
square2 = Square(4)
print(square2)
print "Perimeter of square2 is ",square2.circum()
print "Is perimeter square1 > square2: ",square1 > square2
rectangle1 = Rectangle(4, 4)
print(rectangle1)
print "Perimeter of rectangle1 is ", rectangle1.circum()
print "Area of rectangle1 is ", rectangle1.area()
print "Is area square2 == rectangle1", square2 == rectangle1 
circle1 = Circle(5)
print(circle1)
print "Perimeter of circle1 is ", circle1.circum()
print "Area of circle1 is", circle1.area()
print "Is perimeter square1 < circle1: ", square1 < circle1
