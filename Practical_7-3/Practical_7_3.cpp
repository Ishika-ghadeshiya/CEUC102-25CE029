#include<iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
protected:
    float temp;

public:

    Celsius(float t = 0)
    {
        temp = t;
    }

    float getTemp()
    {
        return temp;
    }


    operator Fahrenheit();

    void display()
    {
        cout << temp << " C" << endl;
    }


    bool operator==(Fahrenheit f);
};

class Fahrenheit
{
protected:
    float temp;

public:

    Fahrenheit(float t = 0)
    {
        temp = t;
    }

    float getTemp()
    {
        return temp;
    }


    operator Celsius()
    {
        return Celsius((temp - 32) * 5 / 9);
    }

    void display()
    {
        cout << temp << " F" << endl;
    }
};


Celsius::operator Fahrenheit()
{
    return Fahrenheit((temp * 9 / 5) + 32);
}


bool Celsius::operator==(Fahrenheit f)
{
    Celsius c2 = f;
    return temp == c2.getTemp();
}

int main()
{

    Celsius arr[3] = {Celsius(25), Celsius(35), Celsius(45)};

    cout << "Static Array Conversion:\n";
    for(int i = 0; i < 3; i++)
    {
        Fahrenheit f = arr[i];
        f.display();
    }

    Fahrenheit* queue = new Fahrenheit[3];
    int front = 0, rear = -1;

    queue[++rear] = Celsius(0);
    queue[++rear] = Celsius(100);
    queue[++rear] = Celsius(37);

    cout << "\nDynamic Queue (Fahrenheit):\n";
    while(front <= rear)
    {
        queue[front].display();
        front++;
    }

    delete[] queue;

    Celsius c1(25);
    Fahrenheit f1 = c1;

    if(c1 == f1)
        cout << "\nTemperatures are equal\n";
    else
        cout << "\nTemperatures are not equal\n";

    return 0;
}
