ip=input("Enter a list of numbers:").split()
item=input("Enter a item: ")
print("AVAILABLE") if (item in ip) else print("NOT AVAILABLE")