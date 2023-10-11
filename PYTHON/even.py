txt=input("Enter the numbers: ")
numbers=txt.split(",")
for number in numbers:
    if(int(number)%2==0):
        print(number)