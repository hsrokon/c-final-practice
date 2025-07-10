#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountHolder;
    float balance;

public:
    BankAccount(string name, float initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
        }
        cout << "Deposited: " << amount << endl;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account1("Alice", 1000);
    account1.deposit(500);
    account1.display();
    return 0;
}
