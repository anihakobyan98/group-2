''' Divide all elements of list A to list B '''
try:
	a = ['k' , 23, 24, 13, 42]
	b = [2, 13, 1, 6, 4, 2]
	for i in range(len(a) or range(len(b))):
		print("a[", i, "] / b[", i, "] = ", a[i] / b[i], sep = "")
except IndexError:
	print("Exist index ", i)
except ZeroDivisionError:
	print("Can't divide by zerodivision")
except TypeError:
	print("Unsupported operand type(s) for /")
