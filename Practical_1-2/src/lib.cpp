#include "lib.h"
#include <iostream>
using namespace std;
void lib::add_book()
{
    cout << "\nEnter book ID: ";
    cin >> book_id;
    cout << "\nEnter book title: ";
    cin >> title;
    cout << "\nEnter author's name: ";
    cin >> author;
    cout << "\nEnter the number of copies available: ";
    cin >> copies;
}

int lib::issue_book(int x)
{
    if (book_id == x)
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book issued successfully\n";
            return 1;
        }
        else
        {
            cout << "Book is not available\n";
            return 0;
        }
    }
    return 0;
}

int lib::return_book(int x)
{
    if (book_id == x)
    {
        copies++;
        cout << "Book returned successfully\n";
        return 1;
    }
    return 0;
}

void lib::display_all()
{
    cout << "ID: " << book_id
         << " Title: " << title
         << " Author: " << author
         << " Copies: " << copies << endl;
}
