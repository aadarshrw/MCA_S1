dict1={1:33, 7: 55, 5:22 }
print("intial dict",dict1)

#Based on keys
dict1=dict(sorted(dict1.items()))
print("accending(based on key):",dict1)

dict1=dict(sorted(dict1.items(),reverse=True))
print("decending(based on key):",dict1)

#Based on values
dict1=dict(sorted(dict1.items(),key=lambda item: item[1]))
print("decending(based on value):",dict1)

dict1=dict(sorted(dict1.items(),key=lambda item: item[1],reverse=True))
print("decending(based on value):",dict1)
