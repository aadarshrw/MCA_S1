string=input("Enter the string: ")
starts=string[0]
ends=string[-1]
swap=ends+string[1:-1]+starts
print("The swapped string is ",swap)
