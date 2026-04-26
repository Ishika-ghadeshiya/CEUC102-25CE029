#include<iostream>
#include "details.h"

int main()
{
    details D[50];
    int choice, l = 0, i;
    long long an;

    while (true)
    {
        cout << "\n1.Create Account\n2.Withdraw Money\n3.Deposit Money\n4.Check Balance\n5.Display All\n6.Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            D[l].create_acc();
            l++;
            break;

        case 2:
            cout << "Enter account number: ";
            cin >> an;

            for (i = 0; i < l; i++)
            {
                if (D[i].withdraw(an) == 1)
                    break;
            }
            if (i == l)
                cout << "Account does not exist!!\n";
            break;

        case 3:
            cout << "Enter account number: ";
            cin >> an;

            for (i = 0; i < l; i++)
            {
                if (D[i].deposit(an) == 1)
                    break;
            }
            if (i == l)
                cout << "Account does not exist!!\n";
            break;

        case 4:
            cout << "Enter account number: ";
            cin >> an;

            for (i = 0; i < l; i++)
            {
                if (D[i].check_balance(an) == 1)
                    break;
            }
            if (i == l)
                cout << "Account does not exist!!\n";
            break;

        case 5:
            for (i = 0; i < l; i++)
                D[i].display();
            break;

        case 6:
            return 0;

        default:
            cout << "Invalid Choice!!\n";
        }
    }
}
