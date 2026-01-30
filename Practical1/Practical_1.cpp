#include<iostream>
using namespace std;
class bank_account
{
    private:
    long long acc_number,balance;
    char acc_holder[25];
    public:
        void create_acc();
         int check_balance(long long);
        int deposit(long long);
        int withdraw(long long);
};
void bank_account::create_acc()
{
    cout<<"Enter account number: ";
    cin>>acc_number;
    cout<<"Enter account holder name: ";
    cin>>acc_holder;
    cout<<"Enter balance: ";
    cin>>balance;
}
int bank_account::withdraw(long long x)
{
    int amt;
    if(acc_number==x)
    {
      cout<<"Enter the amount to be withdrawn: ";
      cin>>amt;
      if(balance>=amt)
      {
          balance=balance-amt;
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
int bank_account::deposit(long long x)
{
    int amt;
    if(acc_number==x)
    {
      cout<<"Enter the amount to be deposit: ";
      cin>>amt;
        balance=balance+amt;

      return 1;
    }
    else
    {
     return 0;
    }
}
int bank_account::check_balance(long long x)
{
    if(acc_number==x)
    {
        cout<<"Balance: \n"<<balance;
        return 1;
    }
    else
        {
            return 0;
        }
}
int main()
{
    bank_account B[50];
    int ch,last=0,i;
    long long AcNo;
    M: cout<< "\n1.create account 2.Withdraw 3.Deposit 4.check balance 5.exit----> \n";
    cout<< "Enter your choice\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        B[last].create_acc();
        last++;
        goto M;
    case 2:
        cout<<"Enter account number";
        cin>>AcNo;

        for(i=0;i<last;i++)
        {
            if((B[i].withdraw(AcNo))==1)
            {
                break;
            }
        }
        if(i==last)
        {
            cout<<"Account does not exist\n";
        }
        goto M;
    case 3:
        cout<<"Enter account number";
        cin>>AcNo;

        for(i=0;i<last;i++)
        {
            if((B[i].deposit(AcNo))==1)
            {
                break;
            }
        }
        if(i==last)
        {
            cout<<"Account does not exist\n";
        }
        goto M;
    case 4:
        cout<<"Enter account number";
        cin>>AcNo;

        for(i=0;i<last;i++)
        {
            if((B[i].check_balance(AcNo))==1)
            {
                break;
            }
        }
        if(i==last)
        {
            cout<<"Accouunt does not exist\n";
        }
        goto M;
    case 5:
        break;
    default:
        cout<<"Invalid choice\n";
        goto M;


    }
    return 0;
}
