def separate_odd_even(input_file, output_file_even, output_file_odd):
  with open(input_file, "r") as f:
    numbers = [int(line.strip()) for line in f]
  even_numbers = []
  odd_numbers = []
  for number in numbers:
    if number % 2 == 0:
      even_numbers.append(number)
    else:
      odd_numbers.append(number)
  with open(output_file_even, "w") as f:
    for number in even_numbers:
      f.write(str(number) + "\n")
  with open(output_file_odd, "w") as f:
    for number in odd_numbers:
      f.write(str(number) + "\n")

if __name__ == "__main__":
  input_file = "numbers.txt"
  output_file_even = "even.txt"
  output_file_odd = "odd.txt"
  separate_odd_even(input_file, output_file_even, output_file_odd)