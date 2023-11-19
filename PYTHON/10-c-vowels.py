vowels=['a','A','e','E','i','I','o','O','u','U']
s=input("Enter a string: ")
s1=list(s)
print(s1)
v=[item for item in s if(item in vowels)]
print("vowels: ",v)
