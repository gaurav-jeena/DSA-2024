#include<iostream>
using namespace std;
void sort(int arr[], int n)
{
    int lo=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        switch(arr[mid])
        {
            case 0:
            {
                swap(arr[mid], arr[lo]);
                mid++;
                lo++;
                break;
            }
            case 1:
            {
                mid++;
                break;
            }
            case 2:
            {
                swap(arr[mid],arr[hi]);
                hi--;
                break;
            }

        }
    }

}

void printarr(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,0,2,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    printarr(arr,n);
return 0;
}