#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
       int fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;

    }
}