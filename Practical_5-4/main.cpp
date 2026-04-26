#include "Student.h"

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[50];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();
    }

    // Header
    cout << endl;
    cout << setfill('-') << setw(45) << "-" << endl;
    cout << setfill(' ');
    cout << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Fees" << endl;
    cout << setfill('-') << setw(45) << "-" << endl;
    cout << setfill(' ');

    // Display data
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    cout << setfill('-') << setw(45) << "-" << endl;

    return 0;
}
