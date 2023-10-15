str= input("Enter a string: ").split()
l1=[len(word) for word in str]
l1.sort()
print("Length of the longest word is: ",l1[-1])
if len(l1)>1:
    if(l1[-1]==l1[-2]):
        print("BINGO")
    