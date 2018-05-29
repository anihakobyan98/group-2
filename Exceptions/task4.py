''' Number that type is integer and it can be divided to 3 '''
try:
	a = int(input("Enter a number: "))
except ValueError:
	print("Entered value must be an integer type")
else:
	if a % 3 != 0:
		raise TypeError("Number must be divisible to 3")
	else:
		print("Excellent")
	
