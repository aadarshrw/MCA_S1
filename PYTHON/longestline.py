def find_longest_line(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            if not lines:
                return None
            longest_line = max(lines, key=len)
            return longest_line.strip()
    except FileNotFoundError:
        return f"File not found: {file_path}"
    except Exception as e:
        return f"An error occurred: {e}"

file_path = input("Enter the filename: ")
result = find_longest_line(file_path)
if result is not None:
    print(f"The longest line in the file is:\n{result}")
else:
    print("No lines found in the file.")
