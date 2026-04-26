#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accNo;
    double balance;
    string history[100];
    int top;

public:
    Account();
    Account(int no, double bal);
    virtual ~Account();

    void deposit(double amt);
    virtual void withdraw(double amt);
    void undo();
    virtual void display();
};

class Savings : public Account
{
    double interest;

public:
    Savings();
    Savings(int no, double bal, double i);
    ~Savings();

    void display();
};

class Current : public Account
{
    double overdraft;

public:
    Current();
    Current(int no, double bal, double od);
    ~Current();

    void withdraw(double amt);
    void display();
};

#endif
