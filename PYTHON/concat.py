string1=input("Enter the first string: ")
string2=input("Enter the second string: ")
start1=string1[0]
start2=string2[0]
swap1=start2+string1[1:]
swap2=start1+string2[1:]
final=swap1+" "+swap2
print("The final string is ",final)