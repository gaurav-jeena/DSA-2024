#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch ='A';
    cout<<"enter a number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
        
        cout<<ch;
        ch=ch+1;
        j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}