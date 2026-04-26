#include "Student.h"

// Define manipulator
ostream& currency(ostream &out)
{
    out << " ";
    return out;
}

// Input details
void Student::input()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter fees: ";
    cin >> fees;
}

// Display formatted output
void Student::display()
{
    cout << setw(15) << name
         << setw(10) << marks
         << setw(15) << fixed << setprecision(2)
         << currency << fees << endl;
}
