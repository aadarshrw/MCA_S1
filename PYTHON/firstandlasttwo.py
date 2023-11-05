str=input("Enter a string: ")
result=""
if len(str)==2:
    result=str*2
elif len(str)<2:
    result=""
else:
    result=str[:2]+str[-2:]
print(result)