#include<iostream>
using namespace std;
// prime --> 1
// not prime --> 0
bool isprime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
        return 0;
        }
    }
    return 1;
}

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
if(isprime(n))
{
cout<<"the number is prime"<<endl;
}
cout<<"the number is not a prime number"<<endl;
}