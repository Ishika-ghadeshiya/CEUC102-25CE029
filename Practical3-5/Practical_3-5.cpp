#include<iostream>
#include<string>
using namespace std;
int fun(long long n);
int main()
{
     string n,temp;
     long long N;
     int ans,k;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"How many number of times n needs to repeated\n";
    cin>>k;
    temp=n;
    for(int i=1;i<k;i++)
    {
        n=n+temp;
    }
    N=stoll(n);
    ans=fun(N);
    cout<<"\n"<<ans;
    return 0;
}
int fun( long long n)
{
    int a=0;
    if(n<10)
        return n;
    else

    while(n>0)
    {

    a= a+n%10;
    n=n/10;

    }
    return  fun(a);


}
