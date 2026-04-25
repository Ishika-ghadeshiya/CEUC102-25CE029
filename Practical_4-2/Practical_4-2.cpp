#include <iostream>
using namespace std;

class point {
private:
    int x, y;
public:
    point(); // constructor
    void setdata(int a, int b);
    point& move(int dx, int dy);
    void display();
};
point::point() {
    x = 0;
    y = 0;
}

void point::setdata(int a, int b) {
    x = a;
    y = b;
}

point& point::move(int dx, int dy) {
    x += dx;
    y += dy;
    return *this;
}

void point::display() {
    cout << "Current coordinates: (" << x << ", " << y << ")\n";
}

void updatePoint(point* p) {
    p->move(10, 10);
}
// function declaration
void updatePoint(point* p);

int main()
{
    int x,y;
    point p1,p2;
    cout<<"set the initail points\n";
    cin>>x>>y;
    p1.setdata(x,y);
    cout<<"enter the coordinates to be moved\n";
    cin>>x>>y;
    p1.move(x,y);
    p1.display();
    // for chainable function
    cout<<"\nfor chainable\n";
    p2.setdata(5,5);
    p2.move(2,3).move(-1,4);
    p2.display();
    //pass-by-reference using pointers
    cout << "\npass by reference using pointer\n";
    updatePoint(&p2);
    p2.display();
    return 0;
}
