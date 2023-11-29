try:
  x = int(input("Enter the value: "))
  if x < 0:
    raise AssertionError("Value must be positive")
except AssertionError as e:
  print(e)
