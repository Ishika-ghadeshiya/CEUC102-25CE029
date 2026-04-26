#include "Grading.h"
#include<iostream>
using namespace std;
int main()
{
    int n, choice;

    cout << "Enter number of students: ";
    cin >> n;

    Grading* g[50];

    for (int i = 0; i < n; i++)
    {
        cout << "\n1. Undergraduate\n2. Postgraduate\nChoose type: ";
        cin >> choice;

        if (choice == 1)
            g[i] = new Undergraduate();
        else
            g[i] = new Postgraduate();

        g[i]->input();
        g[i]->computeGrade();
    }

    cout << "\n--- Student Results ---\n";
    for (int i = 0; i < n; i++)
    {
        g[i]->display();
    }

    for (int i = 0; i < n; i++)
        delete g[i];

    return 0;
}
