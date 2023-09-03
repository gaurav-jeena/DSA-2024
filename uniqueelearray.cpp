#include<iostream>
using namespace std;
void unique(int arr[],int n)
{

}
void printarr(int arr[] , int n)
{
for (int i = 0; i < n ; i++)
{
    cout<<"the unique elements are"<<arr[i]<<" ";
}

}
int main()
{  
    int arr[5]={2,3,4,2,3};
    printarr(arr,5);
return 0;
}