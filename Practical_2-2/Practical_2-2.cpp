#include<iostream>
using namespace std;

class Rectangle
{
private:
    float l,w;

public:

    void setData(float a, float b)
    {
        l=a;
        w=b;
    }


    void update(float c, float d)
    {
        l=c;
        w=d;
        cout << "Dimensions updated\n";
    }


    float area()
    {
        return l*w;
    }


    float perimeter()
    {
        return (2 * (l+w));
    }


    void display()
    {
        cout << "Length: " << l<< " Width: " << w<< " Area: " << area()<< " Perimeter: " << perimeter()<< endl;
    }
};

int main()
{
    int i,n, c, index;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[100];

    for( i = 0; i < n; i++)
    {
        float a, b;
        cout << "\nEnter length and width for rectangle " << i+1 << ": ";
        cin >> a >> b;
        r[i].setData(a, b);
    }

    do
    {
        cout << "\n1.Display All\n2.Update Rectangle\n3.Exit\n";
        cin >> c;

        switch(c)
        {
            case 1:
                cout << "\n--- Rectangle Details ---\n";
                for(int i = 0; i < n; i++)
                {
                    cout << "Rectangle " << i+1 << ": ";
                    r[i].display();
                }
                break;

            case 2:
                cout << "Enter rectangle number to update: ";
                cin >> index;

                if(index >= 1 && index <= n)
                {
                    float c, d;
                    cout << "Enter new length and width: ";
                    cin >> c >> d;
                    r[index-1].update(c, d);
                }
                else
                {
                    cout << "Invalid index\n";
                }
                break;
        }

    } while(c != 0);

    return 0;
}
