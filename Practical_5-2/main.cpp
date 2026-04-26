#include "FileCounter.h"

int main()
{
    FileCounter fc;
    string filename;

    cout << "Enter file name: ";
    cin >> filename;

    fc.processFile(filename);
    fc.display();

    return 0;
}
