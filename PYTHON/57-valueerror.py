try:
  x = int(input("Enter the value: "))
  if x < 90 or x > 120:
    raise ValueError("Abnormal Condition")
except ValueError as e:
  print(e)
