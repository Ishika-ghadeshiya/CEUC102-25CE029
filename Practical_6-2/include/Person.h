#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a);
};

class Employee : public Person
{
protected:
    int empId;

public:
    Employee(string n, int a, int id);
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string n, int a, int id, string d);
    void display();
};

#endif
