s = input('Enter the list elements: ')
l = list(filter(lambda x: len(x) > 5, s.split()))
print(l)
