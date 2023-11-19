def fibo(n):
    "'Generate nth Fibonacci number'"
    a,b = 0,1
    for i in range(n):
        a,b = b,a+b
    return a
n = int(input("Enter number: "))
print('%dth fibonacci number is %d'%(n,fibo(n)))
