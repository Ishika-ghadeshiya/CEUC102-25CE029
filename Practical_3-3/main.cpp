#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    class account A[100];
    int c,n,i;
    long int an;
    do
    {
        cout<<"\nMENU\n"<<"1.Create Account\n2.Withdraw Money\n3.Deposit Money\n4.Transfer\n5.Check Balance\n6.Exit\n";
    cout<<"Enter your choice\n";
    cin>>c;
    switch(c)
    {


case 1:
    cout<<"Enter the number of accounts to created\n";
    cin>>n;

    for(i=0;i<n;i++)
    {
        A[account::total_acc].create_acc();
    }
    break;

case 2:
    cout<<"Enter your account number\n";
    cin>>an;

    for(i=0;i<account::total_acc;i++)
    {
        if(A[i].withdraw(an)==1)
            break;
    }

    if(i==account::total_acc)
        cout<<"Account does not exist\n";

    break;

case 3:
    cout<<"Enter your account number\n";
    cin>>an;

    for(i=0;i<account::total_acc;i++)
    {
        if(A[i].deposit(an)==1)
            break;
    }

    if(i==account::total_acc)
        cout<<"Account does not exist\n";

    break;

case 5:
    cout<<"Enter your account number\n";
    cin>>an;

    for(i=0;i<account::total_acc;i++)
    {
        if(A[i].check(an)==1)
            break;
    }

    if(i==account::total_acc)
        cout<<"Account does not exist\n";

    break;
    }
}
    while(c!=6);
    return 0;
}
