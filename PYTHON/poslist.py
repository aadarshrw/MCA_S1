a=input("Enter numbers: ")
a=list(map(int,a.split(',')))
print(a)
pos=[item for item in a if(item>0)]
print(pos)
