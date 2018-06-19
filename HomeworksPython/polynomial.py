class Polynomial(object):
	def __init__(self, a, b, c):
		self.a = a
		self.b = b
		self.c = c
	def hav(self):
		d =  (self.b ** 2) - (4 * self.a * self.c)
		if d < 0:
			return "Havasarumn armatner chuni"
		elif d == 0:
			return -self.b / (2 * self.a)
		else:
			x1 = (-self.b + d ** 0.5) / (2 * self.a)
			x2 = (-self.b - d ** 0.5) / (2 * self.a)
			return "x1 = " + str(x1) + "\nx2 = " + str(x2)

	def xValue(self, a, b, c, x):
		Polynomial.__init__(self, a, b, c)
		self.x = x
		D = (self.a * (self.x ** 2)) + (self.b * self.x) + self.c
		return "D = " + str(D)
	def sum(self, other):
		return str(self.a + other.a) + "x^2"  + str(self.b + other.b) + "x" + "+" + str(self.c + other.c)

	def sub(self, other):
		return str(self.a - other.a) + "x^2"  + str(self.b - other.b) + "x" + "+" + str(self.c - other.c)
	
x = Polynomial(2,10,1)
y = Polynomial(7,4,2)

print(x.hav())
print(x.xValue(4,-10,1,5))
print(x.sum(y))
print(x.sub(y))
