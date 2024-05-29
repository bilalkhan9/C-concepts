#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    void checkBalance() {
        cout << "Current Balance: RS " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of RS " << amount << " successful." << endl;
        checkBalance();
    }

    void withdraw(int amount) {
        if (amount <= balance && (amount % 500 == 0 || amount % 1000 == 0)) {
            balance -= amount;
            cout << "Withdrawal of RS " << amount << " successful." << endl;
            checkBalance();
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

int main() {
    string name;
    double initialBalance;

    cout << "Welcome to Simple Bank!" << endl;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter initial balance: RS ";
    cin >> initialBalance;

    BankAccount account(name, initialBalance);

    int choice;
    int amount;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: Rs";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw (in multiples of 500 or 1000): Rs.";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for banking with us!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
system("pause");
    return 0;
}
