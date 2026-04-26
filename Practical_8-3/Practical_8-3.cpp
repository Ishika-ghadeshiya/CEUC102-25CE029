#include<iostream>
using namespace std;

// tracking the activity
string logs[50];
int idx = 0;

void logMsg(string msg) {
    logs[idx++] = msg;
}
class BankAccount
{
private:
    long int balance;
public:
     BankAccount() {
        balance = 0;
    }
     BankAccount(long int a) {
        balance = a;
    }
    void deposit(long int amt)
    {
        logMsg("Enter deposit()");


            if(amt<0)
                throw"Invalid deposit amount\n";
            else
        balance+=amt;

        logMsg("Exit deposit()");
    }
     void withdraw(long int amt)
    {
        logMsg("Enter withdraw()");

            if(amt<0)
                throw"Invalid withdrawing amount\n";
            else if(amt>balance)
            {
             throw"Insufficient balance";

            }
            else
            balance-=amt;

        logMsg("Exit withdraw()");
    }
};
void func2(BankAccount &acc) {
    logMsg("Enter func2()");
    acc.withdraw(2000);
    logMsg("Exit func2()");
}

void func1(BankAccount &acc) {
    logMsg("Enter func1()");
    func2(acc);
    logMsg("Exit func1()");
}
int main ()
{
     BankAccount acc(1000);
      try {
        logMsg("Enter main()");
        acc.deposit(500);
        func1(acc);
        logMsg("Exit main()");
    }
     catch (const char* msg) {
        logMsg("Exception caught in main()");
        cout << "Error: " << msg << endl;
    }
     cout << "\nLogs:\n";
    for (int i = 0; i < idx; i++) {
        cout << logs[i] << endl;
    }

    return 0;
}
