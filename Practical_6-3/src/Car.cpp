#include "Car.h"

Fuel::Fuel()
{
    fuelType = "";
}

Fuel::Fuel(string f)
{
    fuelType = f;
}

Brand::Brand()
{
    brandName = "";
}

Brand::Brand(string b)
{
    brandName = b;
}

Car::Car() : Fuel(), Brand()
{
}

Car::Car(string f, string b) : Fuel(f), Brand(b)
{
}

void Car::display()
{
    cout << "Brand: " << brandName << endl;
    cout << "Fuel: " << fuelType << endl;
}
