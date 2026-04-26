#include <iostream>
#include "base.h"
using namespace std;

int main()
{
    base* ptr;

    cout << "Creating Derived object using Base pointer...\n";
    ptr = new Derived();

    cout << "\nDeleting object...\n";
    delete ptr;

    return 0;
}
