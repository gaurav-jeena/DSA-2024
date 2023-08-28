#include<iostream>
using namespace std;
bool search(int a[], int size, int key)
{
    for(int i=0;i<=size;i++)
    {
        if(a[i]==key)
        return 1;
    }
    return 0;
}
int main()
{
    int a[10];
    int key;
    cout<<"enter the element of an array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the key to be searched"<<" ";
    cin>>key;
    bool found = search(a,10,key);
    if(found){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
return 0;
}