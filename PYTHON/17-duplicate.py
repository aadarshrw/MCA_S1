limit=int(input("Enter the limit: "))
l1=[]
l2=[]
for _ in range(limit):
    l1.append(int(input("Enter a number: ")))
for num in l1:
    if num not in l2:
        l2.append(num)
print("The list without duplicate elements is: ",l2)
        


