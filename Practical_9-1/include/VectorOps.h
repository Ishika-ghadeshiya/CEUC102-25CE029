#ifndef VECTOROPS_H
#define VECTOROPS_H

#include <iostream>
#include <vector>
using namespace std;

class VectorOps
{
public:
    void input(vector<int>& v);
    void display(vector<int>& v);

    void reverseUsingSTL(vector<int>& v);
    void reverseManual(vector<int>& v);
};

#endif
