def copy_odd_lines(source_path, destination_path):
    try:
        with open(source_path, 'r') as source_file:
            lines = source_file.readlines()
            odd_lines = [line for i, line in enumerate(lines, start=1) if i % 2 != 0]
            with open(destination_path, 'w') as destination_file:
                destination_file.writelines(odd_lines)
        print(f"Odd lines copied from '{source_path}' to '{destination_path}' successfully.")
    except FileNotFoundError:
        print(f"Error: File not found - {source_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

source_file_path = input("Enter the source file name: ")
destination_file_path = input("Enter the destination file name: ")
copy_odd_lines(source_file_path, destination_file_path)
