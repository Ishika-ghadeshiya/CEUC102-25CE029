#include "VectorOps.h"

int main()
{
    VectorOps obj;
    vector<int> v1, v2;

    obj.input(v1);

    // Copy for second method
    v2 = v1;

    cout << "\nOriginal Vector: ";
    obj.display(v1);

    // STL reverse
    obj.reverseUsingSTL(v1);
    cout << "Reversed using STL: ";
    obj.display(v1);

    // Manual reverse
    obj.reverseManual(v2);
    cout << "Reversed manually: ";
    obj.display(v2);

    return 0;
}
