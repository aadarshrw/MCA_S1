str=input("Enter a string: ")
str = str+"ly" if  str.lower().strip().endswith("ing") else str+"ing" 
print(str)