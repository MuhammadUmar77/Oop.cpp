#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountID;
    double balance;

public:
    BankAccount(string id, double initialBalance) {
        accountID = id;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Not enough funds to withdraw." << endl; 
        }
    }

    double getBalance() {
        return balance;
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(string id, double initialBalance, double limit) : BankAccount(id, initialBalance) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) {
        if (amount <= balance + overdraftLimit) {
            if (amount > balance) {
                cout << "Using overdraft. ";
            }
            BankAccount::withdraw(amount);
        } else {
            cout << "Withdrawal exceeds overdraft limit." << endl;
        }
    }
};


class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string id, double initialBalance, double rate) : BankAccount(id, initialBalance) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest added: " << interest << ". New balance: " << balance << endl;
    }
};

int main() {
    CheckingAccount c1("bank0426", 50000, 100);
    c1.deposit(1000);
    c1.withdraw(15000);
    c1.withdraw(5000);

    SavingsAccount s1("bank777", 10000, 2);
    s1.calculateInterest();

    return 0;
}
