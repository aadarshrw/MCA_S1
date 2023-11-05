def even_collection(numbers):
    for item in numbers:
        if(item == 237): break
        elif not item % 2: print(item)

n = input("Enter the numbers: ")
n = list(map(int,n.split()))
even_collection(n)
