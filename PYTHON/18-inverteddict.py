dic={1:"one",2:"two",3:"three"}
print("intial dict is:",dic)
dic={value:key for key,value in dic.items()}
print("inverted dict is :",dic)
