#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    lib L[100];
    int ch, last = 0, id, i;

    cout << "Welcome to smart library management system\n";

    while (true)
    {
        cout << "\n1.Add book\n2.Issue book\n3.Return book\n4.Display available\n5.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            L[last].add_book();
            last++;
            break;

        case 2:
            cout << "Enter book ID: ";
            cin >> id;

            for (i = 0; i < last; i++)
            {
                if (L[i].issue_book(id) == 1)
                    break;
            }
            if (i == last)
                cout << "Book not found\n";
            break;

        case 3:
            cout << "Enter book ID: ";
            cin >> id;

            for (i = 0; i < last; i++)
            {
                if (L[i].return_book(id) == 1)
                    break;
            }
            if (i == last)
                cout << "Book not found\n";
            break;

        case 4:
            for (i = 0; i < last; i++)
                L[i].display_all();
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }
}

