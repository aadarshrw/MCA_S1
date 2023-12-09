class BankAccount:
    def __init__(self, account_number, name, account_type, balance):
        self.account_number = account_number
        self.name = name
        self.account_type = account_type
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited amount: {amount}, New balance: {self.balance}")

    def withdraw(self, amount):
        if amount > self.balance:
            print(f"Insufficient balance")
        else:
            self.balance -= amount
            print(f"Withdrawn amount: {amount}, New balance: {self.balance}")


account1 = BankAccount(12345, "John Doe", "Savings", 1000)

account1.deposit(500)
account1.withdraw(200)
