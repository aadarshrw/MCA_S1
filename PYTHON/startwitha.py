s=input("Enter the names: ")
names=list(s.split(','))
names=[item.split(' ') for item in names]
print(names)
count=0
print("first names")
for item in names:
    print(item[0])
    if(item[0][0]=='a' or item[0][0]=='A'):
        count=count+1
print("No of names that start with A is",count)
