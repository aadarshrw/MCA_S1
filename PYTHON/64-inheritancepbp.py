class Publisher:
    def __init__(self, name):
        self.name = name


class Book(Publisher):
    def __init__(self, name, title, author):
        super().__init__(name)
        self.title = title
        self.author = author


class Python(Book):
    def __init__(self, name, title, author, price, no_of_pages):
        super().__init__(name, title, author)
        self.price = price
        self.no_of_pages = no_of_pages

    def __str__(self):
        return f"Publisher: {self.name}\nTitle: {self.title}\nAuthor: {self.author}\nPrice: {self.price}\nNumber of pages: {self.no_of_pages}"


python_book = Python("Apress", "Learning Python", "Mark Lutz", 45, 500)

print(python_book)  # Displays information about the Python book
