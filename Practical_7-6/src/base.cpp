#include "base.h"
#include <iostream>
using namespace std;
base::base()
{
    cout << "Base Constructor\n";
}
base::~base()
{
    cout << "Base Destructor\n";
}
Derived::Derived()
{
    data = new int[5];
    cout << "Derived Constructor (Memory Allocated)\n";
}
Derived::~Derived()
{
    delete[] data;
    cout << "Derived Destructor (Memory Freed)\n";
}
