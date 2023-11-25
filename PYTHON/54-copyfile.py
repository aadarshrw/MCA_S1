def copy_file(source_path, destination_path):
    try:
        with open(source_path, 'rb') as source_file:
            content = source_file.read()
            with open(destination_path, 'wb') as destination_file:
                destination_file.write(content)
        print(f"File '{source_path}' copied to '{destination_path}' successfully.")
    except FileNotFoundError:
        print(f"Error: File not found - {source_path}")
    except Exception as e:
        print(f"An error occurred: {e}")
    
source_file_path = input("Enter the source file name: ")
destination_file_path = input("Enter the destination file name: ")
copy_file(source_file_path, destination_file_path)
