#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float m1, m2, m3;
public:
    Student()
    {
        roll = 0;
        name = "Test";
        m1 = m2 = m3 = 0;
    }
    Student(int r, string n, float a, float b, float c)
    {
        roll = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }
    float average()
    {
        return (m1 + m2 + m3) / 3;
    }
    void display()
    {
        cout << "Roll: " << roll<< " Name: " << name<< " Marks: " << m1 << ", " << m2 << ", " << m3<< " Avg: " << average()<< endl;
    }
};

int main()
{
    int i, n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];
    for( i = 0; i < n; i++)
    {
        int r;
        string name;
        float a, b, c;

        cout << "\nEnter details for student " << i+1 << endl;
        cout << "Roll: ";
        cin >> r;
        cout << "Name: ";
        cin >> name;
        cout << "Marks (3 subjects): ";
        cin >> a >> b >> c;

        s[i] = Student(r, name, a, b, c);
    }
    cout << "\n--- Student Records ---\n";
    for(i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}
