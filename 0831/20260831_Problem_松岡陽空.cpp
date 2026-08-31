#include <iostream>
#include <string>
#include"20260831_Problem_¼‰ª—z‹ó.h"
using namespace std;



BankAccount::BankAccount(const std::string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    double BankAccount::getBalance() const 
    {
        return balance;
    }

    void BankAccount::deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void BankAccount::withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    void BankAccount::displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }


int main() 
{
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // Žc‚•s‘«‚ÅŽ¸”s

    account.displayAccountInfo();

    return 0;
}