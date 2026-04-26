#include "Inventory.h"

int main()
{
    Inventory obj;
    int choice;
    string name;

    do
    {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.addItem();
            break;

        case 2:
            obj.viewItems();
            break;

        case 3:
            cout << "Enter item name to search: ";
            cin >> name;
            obj.searchItem(name);
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
