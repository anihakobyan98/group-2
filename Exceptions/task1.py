''' Converting type of variable to number '''
a = input("Enter variable: ")
print("Type of entered variable is: ", type(a)) 
try:
	b = int(a)
	print("New type is: ", type(b))
except ValueError:
	print("Could not convert to a number")

