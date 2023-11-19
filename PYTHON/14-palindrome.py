str=input("Enter a string: ")
if(str.lower()==str[::-1].lower()):
    print("Palindrome")
else:
    print("Not a palindrome")
