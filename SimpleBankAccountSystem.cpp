
// Simple Bank Account System:
// Create a simple class-based system for a bank account that allows the user to deposit, 
// withdraw, and check the balance.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) {
        if (initial_balance < 0) {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        } else {
            balance = initial_balance;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    double initial_balance;
    cout << "Enter initial balance: ";
    cin >> initial_balance;

    BankAccount account(initial_balance);

    int choice;
    do {
        cout << "\nMenu: \n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
