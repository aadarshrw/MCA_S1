def factorial(n):
    '"Factorial of a number"'
    fact = 1
    for i in range(n,0,-1):
        fact *= i
    return fact

n = int(input('Enter n: '))
print('factorial of %d is %d'%(n,factorial(n)))
    
