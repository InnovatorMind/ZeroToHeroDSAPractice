// Exercise2_Solution.cpp

#include <iostream>
#include <string>
#include <iomanip> // For setting precision
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Setter methods
    void setAccountNumber(string num) {
        accountNumber = num;
    }

    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    void setBalance(double b) {
        balance = b;
    }

    // Method to deposit amount
    void deposit(double amount) {
        balance += amount;
    }

    // Method to withdraw amount
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    // Method to print account details
    void printAccountDetails() {
        cout << fixed << setprecision(2);
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl << endl;
    }
};

int main() {
    BankAccount account1, account2;

    // Initializing account1
    account1.setAccountNumber("123456789");
    account1.setAccountHolder("Alice Smith");
    account1.setBalance(1000.00);

    // Operations on account1
    account1.deposit(500.00);
    account1.withdraw(200.00);

    // Initializing account2
    account2.setAccountNumber("987654321");
    account2.setAccountHolder("Bob Johnson");
    account2.setBalance(3000.00);

    // Operations on account2
    account2.withdraw(500.00);

    // Displaying account details
    account1.printAccountDetails();
    account2.printAccountDetails();

    return 0;
}