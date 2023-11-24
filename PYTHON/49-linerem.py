try:
	with open('months.txt', 'r') as fr:
		lines = fr.readlines()
		ptr = 1
		with open('months.txt', 'w') as fw:
			for line in lines:
				if ptr != 5:
					fw.write(line)
				ptr += 1
	print("Line Deleted!!")
except:
	print("Line not Deleted!!")
