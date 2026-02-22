#include <iostream>
#include "loan.h"
using namespace std;

int main()
{
    loan l1;
    cout <<"Default:\n";
    l1.insert_data();
    l1.display();
    cout<<endl;
    cout<<"Parameterised\n";
    loan l2("Ishika",148000,12);
    l2.display();
    return 0;
}
