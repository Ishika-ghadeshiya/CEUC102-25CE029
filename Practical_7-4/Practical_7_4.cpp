#include<iostream>
using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual ~shape() {}
};


class rectangle : public shape
{
private:
    float l, b;

public:
    rectangle(float a, float c)
    {
        l = a;
        b = c;
    }

    float area()
    {
        cout << "Area of rectangle is: ";
        return l * b;
    }
};

class circle : public shape
{
private:
    float r;

public:
    circle(float a)
    {
        r = a;
    }

    float area()
    {
        cout << "Area of circle is: ";
        return 3.14 * r * r;
    }
};

int main()
{
    float a, b, c;
    shape* s[2];

    cout << "Enter length and breadth of rectangle:\n";
    cin >> a >> b;

    cout << "Enter radius of circle:\n";
    cin >> c;

    s[0] = new rectangle(a, b);
    s[1] = new circle(c);

    cout << "\n--- Using Static Array ---\n";
    for (int i = 0; i < 2; i++)
    {
        cout << s[i]->area() << endl;
    }

    int n = 2;
    shape** d = new shape*[n];

    d[0] = new rectangle(a, b);
    d[1] = new circle(c);

    cout << "\n--- Using Dynamic Array ---\n";
    for (int i = 0; i < n; i++)
    {
        cout << d[i]->area() << endl;
    }

    for (int i = 0; i < n; i++)
        delete d[i];

    delete[] d;

    for (int i = 0; i < 2; i++)
        delete s[i];

    return 0;
}
