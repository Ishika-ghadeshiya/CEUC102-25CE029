#include "Account.h"

Account::Account()
{
    accNo = 0;
    balance = 0;
    top = -1;
}

Account::Account(int no, double bal)
{
    accNo = no;
    balance = bal;
    top = -1;
}

Account::~Account() {}

void Account::deposit(double amt)
{
    balance += amt;
    history[++top] = "Deposit " + to_string((int)amt);
}

void Account::withdraw(double amt)
{
    if (amt <= balance)
    {
        balance -= amt;
        history[++top] = "Withdraw " + to_string((int)amt);
    }
    else
    {
        cout << "Insufficient balance\n";
    }
}

void Account::undo()
{
    if (top >= 0)
    {
        string last = history[top--];

        if (last.find("Deposit") != string::npos)
        {
            int amt = stoi(last.substr(8));
            balance -= amt;
        }
        else if (last.find("Withdraw") != string::npos)
        {
            int amt = stoi(last.substr(9));
            balance += amt;
        }
    }
}

void Account::display()
{
    cout << "Account No: " << accNo << endl;
    cout << "Balance: " << balance << endl;
}

Savings::Savings() {}

Savings::Savings(int no, double bal, double i) : Account(no, bal)
{
    interest = i;
}

Savings::~Savings() {}

void Savings::display()
{
    Account::display();
    cout << "Interest Rate: " << interest << endl;
}

Current::Current() {}

Current::Current(int no, double bal, double od) : Account(no, bal)
{
    overdraft = od;
}

Current::~Current() {}

void Current::withdraw(double amt)
{
    if (amt <= balance + overdraft)
    {
        balance -= amt;
        history[++top] = "Withdraw " + to_string((int)amt);
    }
    else
    {
        cout << "Limit exceeded\n";
    }
}

void Current::display()
{
    Account::display();
    cout << "Overdraft Limit: " << overdraft << endl;
}
