def count_lines(filename):
  with open(filename, "r") as f:
    lines = f.readlines()
  return len(lines)

if __name__ == "__main__":
  filename = input("Enter the name of the file: ")
  line_count = count_lines(filename)
  print(f"The number of lines in {filename} is {line_count}")