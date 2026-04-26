#include "Car.h"

int main()
{
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car* c = new Car[n];

    for (int i = 0; i < n; i++)
    {
        string fuel, brand;
        cout << "\nEnter brand: ";
        cin >> brand;
        cout << "Enter fuel type: ";
        cin >> fuel;

        c[i] = Car(fuel, brand);
    }

    cout << "\nCar Details:\n";
    for (int i = 0; i < n; i++)
    {
        c[i].display();
        cout << endl;
    }

    delete[] c;

    Car s[2] = { Car("Petrol", "Toyota"), Car("Electric", "Tesla") };

    cout << "Static Method:\n";
    for (int i = 0; i < 2; i++)
    {
        s[i].display();
        cout << endl;
    }

    return 0;
}
