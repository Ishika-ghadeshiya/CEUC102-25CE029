#include<iostream>
using namespace std;
class complex{
protected:
    int r,i;
public:
    void setdata(int a,int b)
    {
        r=a;
        i=b;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.r=r-c.r;
        temp.i=i-c.i;
        return temp;
    }

     void display()
    {
        if(i >= 0)
            cout << r << " + " << i << "i" << endl;
        else
            cout << r << " - " << -i << "i" << endl;
    }

};
int main()
{
    int a,b,c,d;
    complex c1,c2,c3,c4;
    cout<<"Enter the real part of first object\n";
    cin>>a;
    cout<<"Enter the imaginary part of first object\n";
    cin>>b;
    cout<<"Enter the real part of second object\n";
    cin>>c;
    cout<<"Enter the imaginary part of second object\n";
    cin>>d;
    c1.setdata(a,b);
    c2.setdata(c,d);
    c3=c1+c2;
    c4=c1-c2;
    cout<<"Addition\n";
    c3.display();
     cout<<"Subtraction\n";
    c4.display();

    return 0;
}
