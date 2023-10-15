c1=input("Eneter the 1st collection of numbers: ").split()
c2=input("Eneter the 2nd collection of numbers: ").split()
print("Both collections are same lenth:",len(c1)==len(c2))
print("Both collections sum the same value",sum(set(map(int,c1)))==sum(set(map(int,c2))))
print("Both have common elements: ",bool(len(set(c1)&set(c2))))
        