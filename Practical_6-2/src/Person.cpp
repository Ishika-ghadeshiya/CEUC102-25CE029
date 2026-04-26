#include "Person.h"

Person::Person(string n, int a)
{
    name = n;
    age = a;
}

Employee::Employee(string n, int a, int id) : Person(n, a)
{
    empId = id;
}

Manager::Manager(string n, int a, int id, string d) : Employee(n, a, id)
{
    department = d;
}

void Manager::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Department: " << department << endl;
}
