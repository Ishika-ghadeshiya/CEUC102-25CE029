#include "Person.h"

int main()
{
    string name, dept;
    int age, id;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter department: ";
    cin >> dept;

    Manager m(name, age, id, dept);

    cout << "\nManager Details:\n";
    m.display();

    return 0;
}
