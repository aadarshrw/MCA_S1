a=input("Enter numbers: ")
a=list(map(int,a.split(',')))
print(a)
sqr=[item**2 for item in a]
print(sqr)
