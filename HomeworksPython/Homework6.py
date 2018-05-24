class Rectangle(object):
	def __init__(self, latitude, longitude):
		self.latitude = latitude
		self.longitude = longitude
	def __str__(self):
		return "Latitude = " + str(self.latitude) + "\nLongitude = " + str(self.longitude)
	def getArea(self):
		return self.latitude * self.longitude
	def getPerimeter(self):
		return 2 * (self.latitude + self.longitude)
rec = Rectangle(2,3)	
print(rec)
print("Rectangle Area = ",rec.getArea())
print("Rectangle Perimeter = ", rec.getPerimeter())
