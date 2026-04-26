#include "SetOps.h"

// Input values
void SetOps::input(vector<int>& v)
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

// Remove duplicates using set
void SetOps::removeDuplicates(vector<int>& v)
{
    set<int> s;

    // Insert into set (duplicates removed automatically)
    for (int i = 0; i < v.size(); i++)
        s.insert(v[i]);

    cout << "\nUnique elements (using set): ";
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    // Convert back to vector
    vector<int> uniqueVec(s.begin(), s.end());

    cout << "\nConverted back to vector: ";
    for (int i = 0; i < uniqueVec.size(); i++)
        cout << uniqueVec[i] << " ";

    cout << endl;
}
