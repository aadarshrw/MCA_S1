import csv
fields = [['Name','Age','Place']]
rows = [['Amrutha',21,'Piravom'],['Aswathy',21,'Muvattupuzha'],['Karthika',21,'Thodupuzha']]
with open('data.csv','w') as file:
    writer = csv.writer(file)
    writer.writerows(fields)
    writer.writerows(rows)
print("csv file has been created.")