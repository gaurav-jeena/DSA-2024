#include<iostream>
using namespace std;
void update(int arr[], int n)
{
    arr[0]=120;
    cout<<"Inside the function";
        for(int i=0;i<3;i++)
        {
         cout<< arr[i]<<" "<<endl;
        }

    cout<<"Going back to the main function"<<endl;



}
int main()
{
    int arr[3] = {1,2,3};
    update(arr,3);
    for(int i=0;i<3;i++)
    {
    cout<< arr[i]<<" ";
    }
    cout<<"in the main function"<<endl;
return 0;
}