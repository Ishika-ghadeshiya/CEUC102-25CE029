#include "Directory.h"

int main()
{
    Directory d;
    int choice;
    string folder, file;

    do
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Add Folder\n";
        cout << "2. Add File\n";
        cout << "3. Display Directory\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter folder name: ";
            cin >> folder;
            d.addFolder(folder);
            break;

        case 2:
            cout << "Enter folder name: ";
            cin >> folder;
            cout << "Enter file name: ";
            cin >> file;
            d.addFile(folder, file);
            break;

        case 3:
            d.display();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
