#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    int sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        {
        sum=sum+i;
        }
     i=i+1;
    } 
    cout<<"the sum of all prime number till n is "<<sum<<endl;
}