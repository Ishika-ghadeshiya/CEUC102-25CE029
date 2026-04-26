#include <iostream>
using namespace std;

// Display array
template <class T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Find maximum
template <class T>
T findMax(T arr[], int n)
{
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Reverse array
template <class T>
void reverseArray(T arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        T temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

// Find leader elements
template <class T>
void findLeaders(T arr[], int n)
{
    cout << "Leader elements: ";
    for (int i = 0; i < n; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Integer array
    int intArr[50];
    cout << "\nEnter integer elements:\n";
    for (int i = 0; i < n; i++)
        cin >> intArr[i];

    display(intArr, n);
    cout << "Max: " << findMax(intArr, n) << endl;
    reverseArray(intArr, n);
    cout << "Reversed: ";
    display(intArr, n);
    findLeaders(intArr, n);

    // Float array
    float floatArr[50];
    cout << "\nEnter float elements:\n";
    for (int i = 0; i < n; i++)
        cin >> floatArr[i];

    display(floatArr, n);
    cout << "Max: " << findMax(floatArr, n) << endl;
    reverseArray(floatArr, n);
    cout << "Reversed: ";
    display(floatArr, n);
    findLeaders(floatArr, n);

    // Character array
    char charArr[50];
    cout << "\nEnter character elements:\n";
    for (int i = 0; i < n; i++)
        cin >> charArr[i];

    display(charArr, n);
    cout << "Max: " << findMax(charArr, n) << endl;
    reverseArray(charArr, n);
    cout << "Reversed: ";
    display(charArr, n);
    findLeaders(charArr, n);

    return 0;
}
