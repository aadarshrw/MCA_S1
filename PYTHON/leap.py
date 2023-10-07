year=int(input("Enter year: "))
leap=[i for i in range(2023,year) if((i%400==0) or (i%100!=0) and (i%4==0))]
print("Leap years: ",leap)