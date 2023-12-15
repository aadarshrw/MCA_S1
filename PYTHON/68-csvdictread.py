import csv
with open('data_dict1.csv','r') as file:
    reader = csv.DictReader(file)
    for row in reader:
        print(row)