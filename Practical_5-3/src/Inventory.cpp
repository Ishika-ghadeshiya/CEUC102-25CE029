#include "Inventory.h"

// Add item to file
void Inventory::addItem()
{
    ofstream file("inventory.txt", ios::app);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string name;
    int qty;
    float price;

    cout << "Enter item name: ";
    cin >> name;
    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price: ";
    cin >> price;

    file << name << " " << qty << " " << price << endl;

    file.close();
    cout << "Item added successfully!\n";
}

// View all items
void Inventory::viewItems()
{
    ifstream file("inventory.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string name;
    int qty;
    float price;

    cout << "\nInventory Items:\n";

    while (file >> name >> qty >> price)
    {
        cout << "Name: " << name
             << ", Quantity: " << qty
             << ", Price: " << price << endl;
    }

    file.close();
}

// Search item by name
void Inventory::searchItem(string searchName)
{
    ifstream file("inventory.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string name;
    int qty;
    float price;
    bool found = false;

    while (file >> name >> qty >> price)
    {
        if (name == searchName)
        {
            cout << "\nItem Found:\n";
            cout << "Name: " << name
                 << ", Quantity: " << qty
                 << ", Price: " << price << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Item not found!\n";

    file.close();
}
