import csv
data = [
        {'Name':'Amrutha','RollNo':13,'Place':'Piravom'},
        {'Name':'Aswathy','RollNo':20,'Place':'Muvattupuzha'},
        {'Name':'Karthika','RollNo':33,'Place':'Thodupuzha'}]
with open('data_dict1.csv','w') as file:
    fieldnames = ['Name','RollNo','Place']
    writer = csv.DictWriter(file,fieldnames = fieldnames)
    writer.writeheader()
    writer.writerows(data)
print("Dictionary data has been written to the csv file.")