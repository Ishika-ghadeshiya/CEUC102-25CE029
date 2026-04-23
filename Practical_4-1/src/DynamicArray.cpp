#include "DynamicArray.h"
#include <iostream>
using namespace std;
DynamicArray::DynamicArray()
{
     arr = '\0';
        s = 0;
}
 void DynamicArray::insert(int value) {
        int* ptr = new int[s + 1];
        for (int i = 0; i < s; i++) {
            ptr[i] = arr[i];
        }
        ptr[s] = value;
        delete[] arr;
        arr = ptr;
        s++;
    }
     void DynamicArray:: remove(int position) {
        if (position < 0 || position >= s) {
            cout << "Invalid position!" << endl;
        }
        int* ptr = new int[s - 1];
        for (int i = 0, j = 0; i < s; i++) {
            if (i != position) {
                ptr[j++] = arr[i];
            }
        }
        delete[] arr;
           arr = ptr;
        s--;
    }
    void DynamicArray::display() {
        if (s == 0) {
            cout << "Array is empty" << endl;
            return;
        }
  cout << "Array elements: ";
        for (int i = 0; i < s; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
DynamicArray::~DynamicArray()
{
     delete[] arr;
}
