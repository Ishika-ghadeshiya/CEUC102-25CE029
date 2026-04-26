#include "Grading.h"
#include<iostream>
using namespace std;
void Grading::input()
{
    cout << "Enter marks: ";
    cin >> marks;
}

void Undergraduate::computeGrade()
{
    if (marks >= 75) grade = 'A';
    else if (marks >= 60) grade = 'B';
    else if (marks >= 50) grade = 'C';
    else grade = 'F';
}

void Undergraduate::display()
{
    cout << "Undergraduate Marks: " << marks
         << " Grade: " << grade << endl;
}

void Postgraduate::computeGrade()
{
    if (marks >= 80) grade = 'A';
    else if (marks >= 65) grade = 'B';
    else if (marks >= 55) grade = 'C';
    else grade = 'F';
}

void Postgraduate::display()
{
    cout << "Postgraduate Marks: " << marks
         << " Grade: " << grade << endl;
}
