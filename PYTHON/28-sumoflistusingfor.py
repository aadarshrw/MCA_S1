def sum_list(l):
    "'Sum of elements of a list'"
    sum = 0
    for i in l:
        sum+=i
    return sum
n = input("Enter the list elements: ")
n = list(map(int,n.split(',')))
print('sum of elements: ',sum_list(n))
