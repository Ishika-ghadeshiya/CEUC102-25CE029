#include "empsalary.h"
#include <iostream>
using namespace std;
empsalary::empsalary()
{
    //ctor

        b=5000;
        next=NULL;

}
empsalary:: empsalary(int x)
    {
        b=x;
         next=NULL;
    }
void empsalary::display_data()
{
    cout<<"Name: "<<n<<endl;
    cout<<"Basic Salary: "<<bs<<endl;
    cout<<"Bonus: "<<b<<endl;
    cout<<"Gross Salary: "<<gs<<endl<<endl;
}
void empsalary::insert_data()
{
    cout<<"Enter name of employee\n";
    cin>>n;
    cout<<"Enter basic salary\n";
    cin>>bs;
    gs=b+bs;
}
