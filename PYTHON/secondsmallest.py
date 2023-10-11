limit=int(input("Enter the limit: "))
numbers=[]
for _ in range(limit):
    number=int(input("Enter a number: "))
    numbers.append(number)
for i in range(len(numbers)):
    for j in range(i+1,len(numbers)):
        if(numbers[i]>numbers[j]):
            temp=numbers[i]
            numbers[i]=numbers[j]
            numbers[j]=temp
print("The second smallest number is ",numbers[1])