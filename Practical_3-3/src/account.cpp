#include<iostream>
#include "Account.h"

using namespace std;
account::account()
{
    acc_no = 0;
    curr_bal = 0;
}
int account::total_acc = 0;


void account::create_acc()
{
    cout<<"Enter account number\n";
    cin>>acc_no;
    cout<<"Enter name of account holder\n";
    cin>>name;
    cout<<"Enter balance\n";
    cin>>curr_bal;
    total_acc++;
}
int account::withdraw(long int a)
{
    int amt;
    if(acc_no==a)
    {
      cout<<"Enter the amount to be withdrawn: ";
      cin>>amt;
      if(curr_bal>=amt)
      {
          curr_bal=curr_bal-amt;
      }
      else
        {
            cout<<"ERROR: Insuficient balance\n";
        }
      return 1;
    }
    else
    {
     return 0;
    }
}
int account::deposit(long int a)
{
    int amt;
    if(acc_no==a)
    {
      cout<<"Enter the amount to be deposit: ";
      cin>>amt;
        curr_bal=curr_bal+amt;

      return 1;
    }
    else
    {
     return 0;
    }
}
int account::check(long  a)
{
    if(acc_no==a)
    {
        cout<<"Balance: \n"<<curr_bal;
        return 1;
    }
    else
        {
            return 0;
        }
}
