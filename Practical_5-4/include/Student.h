#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator
ostream& currency(ostream &out);

class Student
{
private:
    string name;
    int marks;
    float fees;

public:
    void input();
    void display();
};

#endif
