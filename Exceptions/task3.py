''' Assignment value of variable b to a '''
try:
	a = int(input("Enter a variable 'a': "))
	b = a
	print("b = ", b)
except:
	print("Variable 'b' doesn't exist")
