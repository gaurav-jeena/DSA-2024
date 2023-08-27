#include<iostream>
using namespace std;
void printarray(int arr[], int size){
        cout<<"print the array"<<endl;
    // print the array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
        cout<<"print the array is done"<<endl;

    }

int main()
{
    int number[15];
    cout<<"value at 0 index"<<" "<<number[0]<<endl;
    // cout<<"value at 15 index"<<" "<<number[14]<<endl;


    // initialising an array
    int second[3]={5,7,11};
        cout<<"value at 2 index"<<" "<<second[2]<<endl;


    int third[15]={2,7};
    int n=15;
//    printarray(third, 15);
   int thirdsize= sizeof(third)/sizeof(int);
     cout<<"size of third is"<<" "<<thirdsize<<endl;


    int fourth[10]={0};
    n=10;
    //   printarray(fourth, 10);
    // initialising all the elements with 1 is not possible with below line


    int fifth[10]={1};
    n=10;
    //  printarray(fifth, 10);
     int fifthsize= sizeof(fifth)/sizeof(int);
     cout<<"size of fifth is"<<" "<<fifthsize<<endl;


     char ch[5] ={'a','b','c','d'};
       // print the array
    for(int i=0;i<5;i++)
    {
        cout<<ch[i]<<" ";
    }
        cout<<endl<<"printing the array is done"<<endl;

    cout<<endl<<"Everything is fine"<<endl<<endl;
    return 0;
}