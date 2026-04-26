#ifndef DETAILS_H
#define DETAILS_H


#include <iostream>
#include <string>
using namespace std;

class details
{
private:
    string name;
    long long ID;
    long long balance;

public:
    void create_acc();
    int deposit(long long);
    int withdraw(long long);
    int check_balance(long long);
    void display();
};

#endif
