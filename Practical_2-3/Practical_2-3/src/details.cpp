#include "details.h"
#include<iostream>
void details::create_acc()
{
    cout << "\nEnter Account Number: ";
    cin >> ID;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (balance < 0)
    {
        cout << "Invalid balance! Setting to 0.\n";
        balance = 0;
    }
}

int details::withdraw(long long x)
{
    long long amt;

    if (ID == x)
    {
        cout << "Enter Amount to Withdraw: ";
        cin >> amt;

        if (amt > 0 && balance >= amt)
        {
            balance -= amt;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "ERROR: Insufficient Balance or Invalid Amount\n";
        }
        return 1;
    }
    return 0;
}

int details::deposit(long long x)
{
    long long amt;

    if (ID == x)
    {
        cout << "Enter Amount to Deposit: ";
        cin >> amt;

        if (amt > 0)
        {
            balance += amt;
            cout << "Deposit Successful\n";
        }
        else
        {
            cout << "Invalid Amount\n";
        }
        return 1;
    }
    return 0;
}

int details::check_balance(long long x)
{
    if (ID == x)
    {
        cout << "Current Balance: " << balance << endl;
        return 1;
    }
    return 0;
}

void details::display()
{
    cout << "\nAccount ID: " << ID
         << " | Name: " << name
         << " | Balance: " << balance << endl;
}
