#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Account {
protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    Account(int accNo, string name, double bal)
        : accountNumber(accNo), holderName(name), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully." << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    virtual double calculateInterest() const = 0;

    virtual void display() const {
        cout << "Account No: " << accountNumber
             << " | Holder: " << holderName
             << " | Balance: Rs. " << balance << endl;
    }

    virtual ~Account() = default;
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : Account(accNo, name, bal), interestRate(rate) {}

    double calculateInterest() const override {
        return balance * interestRate / 100;
    }

    void display() const override {
        cout << "Savings Account | ";
        Account::display();
        cout << "Interest: Rs. " << calculateInterest() << endl;
    }
};

class CurrentAccount : public Account {
private:
    double interestRate;

public:
    CurrentAccount(int accNo, string name, double bal, double rate)
        : Account(accNo, name, bal), interestRate(rate) {}

    double calculateInterest() const override {
        return balance * interestRate / 100;
    }

    void display() const override {
        cout << "Current Account | ";
        Account::display();
        cout << "Interest: Rs. " << calculateInterest() << endl;
    }
};

class FixedDepositAccount : public Account {
private:
    double interestRate;
    int durationYears;

public:
    FixedDepositAccount(int accNo, string name, double bal,
                        double rate, int years)
        : Account(accNo, name, bal),
          interestRate(rate),
          durationYears(years) {}

    double calculateInterest() const override {
        return balance * interestRate * durationYears / 100;
    }

    void display() const override {
        cout << "Fixed Deposit Account | ";
        Account::display();
        cout << "Interest: Rs. " << calculateInterest()
             << " | Duration: " << durationYears
             << " years" << endl;
    }
};

int main() {

    vector<unique_ptr<Account>> accounts;

    accounts.push_back(
        make_unique<SavingsAccount>(
            6001, "Riya", 45000, 4.5
        )
    );

    accounts.push_back(
        make_unique<CurrentAccount>(
            6002, "Aditya", 70000, 2.5
        )
    );

    accounts.push_back(
        make_unique<FixedDepositAccount>(
            6003, "Sneha", 120000, 6.5, 3
        )
    );

    cout << "=== Banking System ===" << endl << endl;

    for (const auto& account : accounts) {
        account->display();
        cout << endl;
    }

    cout << "=== Transactions ===" << endl;

    accounts[0]->deposit(5000);
    accounts[0]->withdraw(2000);

    accounts[1]->deposit(8000);
    accounts[1]->withdraw(4000);

    accounts[2]->deposit(10000);

    cout << "\n=== Updated Account Details ===" << endl << endl;

    for (const auto& account : accounts) {
        account->display();
        cout << endl;
    }

    return 0;
}
