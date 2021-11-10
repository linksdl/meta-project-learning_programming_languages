#Default value
def sayhello(a='Default name'):  
	return ("Hello! "+a)

print(sayhello())
print(sayhello('Daniel'))

test = sayhello()
print(test)

#Multiple input
def team(a,*b):  
	print(a+" : "+str(b))

team("Alpha team","Carol")
team("Beta team","Hank","Tim","Daniel")
