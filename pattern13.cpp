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
        int j=1;
            char value = 'A'+i+j-2;
        while(j<=i)
        {
            cout<<value<<" ";
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}