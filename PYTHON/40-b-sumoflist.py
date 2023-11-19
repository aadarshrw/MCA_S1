def sum(seq):
    "'Finds sum of elements of a list'"
    if len(seq) == 1:
        return seq[0]
    else: return seq[0]+sum(seq[1:])

l = [5,10,15,20,25]
print('Sum of elements of a list ',l,'=',sum(l))
        
