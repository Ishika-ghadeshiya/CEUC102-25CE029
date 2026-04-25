#include <iostream>
#include <cmath>
using namespace std;
class NegativeNumberException
{
public:
    const char* what() const
    {
        return" Cannot calculate square root of a negative number.";
    }
};

int main()
{
    double num;

    try
    {
        cout << "Enter a number: ";
        cin >> num;
        if (!(num))
        {
            throw "Invalid input!Please enter a numeric value.";
        }
        if (num < 0)
        {
            throw NegativeNumberException();
        }
        cout << "Square root = " << sqrt(num) << endl;
    }
    catch (NegativeNumberException e)
    {
        cout << e.what() << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}
