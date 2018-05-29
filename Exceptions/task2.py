''' Divide variable a to b, if b isn't zero '''
a = input("Enter a number 'a': ")
def foo(a):
	b = int(input("Enter a variable 'b': "))
	try: 
		return "a / b = ", a/b
	except ZeroDivisionError:
		return "Can't divide by zerodivison"

print(foo(a))
