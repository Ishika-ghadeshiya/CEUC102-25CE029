#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main()
{
    DynamicArray da;
    int choice, value, position;

    do {
        cout << "\n Menu\n";
        cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
         switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                da.insert(value);
                break;

            case 2:
                cout << "Enter position: ";
                cin >> position;
                da.remove(position);
                break;

            case 3:
                da.display();
                break;

            case 4:

                break;
                    default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);
    return 0;
}
