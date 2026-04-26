#include "VectorOps.h"
#include <algorithm>

// Input
void VectorOps::input(vector<int>& v)
{
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
}

// Display
void VectorOps::display(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

// Reverse using STL
void VectorOps::reverseUsingSTL(vector<int>& v)
{
    reverse(v.begin(), v.end());
}

// Manual reverse using iterators
void VectorOps::reverseManual(vector<int>& v)
{
    vector<int>::iterator start = v.begin();
    vector<int>::iterator end = v.end() - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
