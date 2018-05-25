class Person(object):
	def __init__(self, first, last, age):
		self.first = first
		self.last = last
		self.age = age
	def __str__(self):
		return self.first + self.last + str(self.age)

class Employee(Person):
	def __init__(self, first, last, age, staffnum):
		Person.__init__(self, first, last, age)
		self.staffnum = staffnum
	def __str__(self):
		return self.first + self.last + str(self.age) + self.staffnum

p1 = Person('John ', 'Doe ', 21)
p2 = Employee('Alice ', 'Jane ', 25, ' Developer')

print(p1)
print(p2)

