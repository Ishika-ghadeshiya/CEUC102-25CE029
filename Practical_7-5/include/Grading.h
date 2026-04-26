#ifndef GRADING_H
#define GRADING_H

#include <iostream>
using namespace std;

class Grading
{
protected:
    float marks;

public:
    virtual void input();
    virtual void computeGrade() = 0;
    virtual void display() = 0;
    virtual ~Grading() {}
};


class Undergraduate : public Grading
{
private:
    char grade;

public:
    void computeGrade();
    void display();
};

class Postgraduate : public Grading
{
private:
    char grade;

public:
    void computeGrade();
    void display();
};

#endif
