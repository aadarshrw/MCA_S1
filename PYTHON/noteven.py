a=input("Enter numbers: ")
a=list(map(int,a.split(',')))
print(a)
noteven=[item for item in a if(item%2==1 or item<=0)]
print("Not even: ",noteven)
