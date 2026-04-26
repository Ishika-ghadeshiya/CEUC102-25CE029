#include "SetOps.h"

int main()
{
    SetOps obj;
    vector<int> v;

    obj.input(v);

    cout << "\nOriginal elements: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    obj.removeDuplicates(v);

    return 0;
}
