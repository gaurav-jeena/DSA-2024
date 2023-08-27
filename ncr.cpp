#include<iostream>
using namespace std;
int factorial(int a)
{  int fact=1;
    for(int i=1;i<=a;i++)
    {
     fact= fact*i;     
    }
    return fact;
}
int ncr( int n , int r)
    {
        int num = factorial(n);
        int den = factorial(r) * factorial(n-r);
        int ans = num/den;
        return ans;
    }
int main(){
    int n,r;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
     cout<<"The answer is "<< ncr(n,r)<<endl;

}