import math
class Complex(object):
	def __init__(self, a, b):
		self.a = a
		self.b = b
	def __str__(self):
		if self.a == 0 and self.b == 0:
			return "[ ]"
		elif self.a == 0:
			return "[" + str(self.b) + "i]"
		elif self.b == 0:
			return "[" + str(self.a) + "]"
		else:
			if(self.b < 0):
				return "[" + str(self.a) + str(self.b) + "i]"
			else:	
				return "[" + str(self.a) + "+" + str(self.b) + "i]"
	def __add__(self, other):
		return Complex(self.a + other.a,self.b + other.b)
	def __sub__(self, other):
		return Complex(self.a - other.a,self.b - other.b)
	def __mul__(self, other):
		return Complex(self.a * other.a - self.b * other.b,self.a * other.b + self.b * other.a)
	def __truediv__(self, other):
		if other.a == 0 or other.b == 0:
			return "Error"
		else:
			return Complex(((self.a * other.a + self.b * other.b) / (other.a ** 2 + other.b ** 2)),((self.b * other.a - self.a * other.b) / (other.a ** 2 + other.b ** 2)))
	def __iadd__(self, other):
		self.a += other.a
		self.b += other.b
		return Complex(self.a, self.b)
	def __isub__(self, other):
		self.a -= other.a
		self.b -= other.b
		return Complex(self.a, self.b)
	def __imul__(self, other):
		self.a = self.a * other.a - self.b * other.b
		self.b = self.a * other.b + self.b * other.a
		return Complex(self.a, self.b)
	def __idiv__(self, other):
		self.a = (self.a * other.a + self.b * other.b) / (other.a ** 2 + other.b ** 2)
		self.b = (self.b * other.a - self.a * other.b) / (other.a ** 2 + other.b ** 2)
		return Complex(self.a, self.b)
	def __gt__(self, other):
		if (self.a ** 2 + self.b ** 2) ** 0.5 > (other.a ** 2 + other.b ** 2) ** 0.5:
			return True
		else:
			return False 
	def __lt__(self, other):
                if (self.a ** 2 + self.b ** 2) ** 0.5 < (other.a ** 2 + other.b ** 2) ** 0.5:
                        return True
                else:
                        return False
	
	def __le__(self, other):
		if (self.a ** 2 + self.b ** 2) ** 0.5 <= (other.a ** 2 + other.b ** 2) ** 0.5:
			return True
		else:
			return False
	def __ge__(self, other):
		if (self.a ** 2 + self.b ** 2) ** 0.5 >= (other.a ** 2 + other.b ** 2) ** 0.5:
			return True
		else:
			return False
	def __eq__(self, other):
		if(self.a == other.a) and (self.b == other.b):
			return True
		else:
			return False
origin = Complex(1,2)
master = Complex(4,7)
print(master + origin)
print(master - origin)
print(master * origin)
print(master / origin)
master += origin
print(master)
master -= origin
print(master)
master *= origin
print(master)
master /= origin
print(master)
print(master > origin)
print(master < origin)
print(master <= origin)
print(master >= origin)
print(master == origin)

