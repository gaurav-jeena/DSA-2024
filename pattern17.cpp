#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
       // int star =n-i;
        while(j<=n)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}