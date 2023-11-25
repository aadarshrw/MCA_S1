def append_to_file(file_path):
    try:
        user_input = input("Enter the content to append to the file:\n")
        with open(file_path, 'a') as file:
            file.write(user_input + '\n')
        print(f"Content appended to '{file_path}' successfully.")
    except FileNotFoundError:
        print(f"Error: File not found - {file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

existing_file_path = input("Enter the file name: ")
append_to_file(existing_file_path)
