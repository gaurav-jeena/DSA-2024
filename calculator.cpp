#include<iostream>
using namespace std;
int main()
{
    int a,b,num,d;
    cout<<"Enter the value of A & B"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter 1 to do Add"<<endl;
    cout<<"Enter 2 to do Sub"<<endl;
    cout<<"Enter 3 to do Mul"<<endl;
    cout<<"Enter 4 to do DIv"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:
        d=a+b;
        cout<<" the addition of 2 number is"<<" "<<d;
        break;
        case 2:
        d=a-b;
        cout<<" the Subtraction of 2 number is"<<" "<<d;
        break;
        case 3:
        d=a*b;
        cout<<" the Multiplication of 2 number is"<<" "<<d;
        break;
        d=a/b;
        cout<<" the Division of 2 number is"<<" "<<d;
        break;
        default:
        cout<<"wrong Input"<<endl;
        }
        
}