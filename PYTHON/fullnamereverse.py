def rev_names(name):
    for word in name[::-1]:
        print(word,end=" ")

n = input('Enter your fullname: ').split()
rev_names(n)
