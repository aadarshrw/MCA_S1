sentence=input("Enter a sentence: ").split()
dic={}
for word in sentence:
    if word in dic:
        dic[word]+=1
    else:
        dic[word]=1
print(dic)
