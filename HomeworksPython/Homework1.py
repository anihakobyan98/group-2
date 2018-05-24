list = [(x,y,z) for x in range(1,30) for y in range(x,30) for z in range(y,30) if z*z == x*x + y*y]
print(list)
