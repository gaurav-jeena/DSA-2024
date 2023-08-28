#include<iostream>
using namespace std;
int sum(int arr[] , int n)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"the sum of elements of an array"<<sum<<endl;
    return sum;
}
int main()
{
    int arr[5];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<5;i++)
    cin>>arr[i];
    sum(arr,5);
return 0;
}