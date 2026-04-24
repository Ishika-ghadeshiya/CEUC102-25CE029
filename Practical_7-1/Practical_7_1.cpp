#include<iostream>
using namespace std;
class calculator
{
private:
    float results[20];
    int index,i;
public:
    calculator()
    {
        index=0;
    }
    int add(int a, int b) {
        int res = a + b;
        results[index++] = res;
        return res;
    }
    float add(float a, float b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }
    float add(int a, float b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }
    float add(float a, int b) {
        float res = a + b;
        results[index++] = res;
        return res;
    }
    void display()
    {
        cout<<"RESULTS"<<endl;

        for(i=0;i<index;i++)
        {
            cout<<i+1<<" :"<<results[i]<<endl;
        }
    }

};
int main()
{
    int a,b;
    float e,d;
    calculator c;
    cout << "Int + Int: " <<endl;
    cin>>a>>b;
    c.add(a, b);
    cout << "Float + Float: "<<endl;
    cin>>e>>d;
    c.add(a, d);
    cout << "Int + Float: "<<endl;
    cin>>a>>e;
    c.add(a, e);
    cout << "Float + Int: " <<endl;
    cin>>e>>a;
    c.add(e, a);
    c.display();
    return 0;
}
