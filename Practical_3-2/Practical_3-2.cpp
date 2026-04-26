#include <iostream>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace chrono;
int recursiveSum(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n-1] + recursiveSum(arr, n-1);
}
int iterativeSum(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    const int REPEAT = 1000;

    cout << "Enter array size: ";
    cin >> n;

    int *arr = new int[n];

    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    auto start_recursive = high_resolution_clock::now();
    int recSum;
    for(int i = 0; i < REPEAT; i++)
    {
        recSum = recursiveSum(arr, n);
    }
    auto end_recursive = high_resolution_clock::now();
    auto duration_recursive =
    duration_cast<microseconds>(end_recursive - start_recursive);


    auto start_iterative = high_resolution_clock::now();

    int itrSum;
    for(int i = 0; i < REPEAT; i++)
    {
        itrSum = iterativeSum(arr, n);
    }
    auto end_iterative = high_resolution_clock::now();
    auto duration_iterative =
    duration_cast<microseconds>(end_iterative - start_iterative);
    cout << "\nRecursive Method\n";
    cout << "Sum = " << recSum << endl;
    cout << "Execution Time = "<< duration_recursive.count()<< " microseconds\n";
    cout << "\nIterative Method\n";
    cout << "Sum = " << itrSum << endl;
    cout << "Execution Time = "<< duration_iterative.count()<< " microseconds\n";
    delete[] arr;
    return 0;
}
