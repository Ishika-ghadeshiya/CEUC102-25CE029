#include "Shape.h"

int main()
{
    int n;

    cout << "Enter number of circles: ";
    cin >> n;


    Circle* c = new Circle[n];

    for (int i = 0; i < n; i++)
    {
        double r;
        cout << "Enter radius of circle " << i + 1 << ": ";
        cin >> r;
        c[i].setRadius(r);
    }

    cout << "\nAreas of circles:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Circle " << i + 1 << " Area: "
             << c[i].area() << endl;
    }

    delete[] c;



    return 0;
}
