#include <iostream>
using namespace std;

int main()
{
    float a, b;
    try
    {
        cout << "Enter numerator and denominator: ";
        if (!(cin >> a >> b))
        {
            throw "Invalid input! Please enter integers only.";
        }
        if (b == 0)
        {
            throw "Error: Division by zero is not allowed.";
        }
        cout << "Result = " << (a / b) << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}
