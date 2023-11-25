def find_longest_word(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            words = content.split()
            longest_word = max(words, key=len)
            return longest_word
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return None

file_path = input("Enter the filename: ")
result = find_longest_word(file_path)
if result:
    print(f"The longest word in the file is: {result}")
