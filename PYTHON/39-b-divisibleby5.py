check = lambda a: 1 if a%5 else 0
a = int(input('Enter the number: '))
out = check(a)
if not(out):
    print('true')
else:
    print('false')
