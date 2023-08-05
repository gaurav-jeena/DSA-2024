#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int i=1;
    while(i<=n)
    { // first triangle
        int j=i;
        int start=1;
        while(j<=n)
        {
            
            cout<<start;
            start=start+1;;
            j=j+1;
        }
        //Second Triangle
        
            cout<<endl;
             i=i+1;
    }

}