limit=int(input("Enter the limit: "))
clist=[]
for _ in range(limit):
    char=input("Enter a character: ")
    clist.append(char)
result=""
for char in clist:
    result+=char
print("The string is",result)
