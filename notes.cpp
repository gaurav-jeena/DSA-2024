#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int amount;
    int rs100,rs50,rs20,rs1;
    cout<<"Enter an amount"<<endl;
    cin>>amount;
    
    switch(1)
    {
        case 1:
                rs100=amount/100;
                amount= amount%100;
                cout<<"The number of 100 rs notes are"<<rs100<<endl;
                //break;
        case 2:
                rs50=amount/50;
                amount= amount%50;
                cout<<"The number of 50 rs notes are"<<rs50<<endl;
                //break;
        case 3:
                rs20=amount/20;
                amount= amount%20;
                cout<<"The number of 20 rs notes are"<<rs20<<endl;
                //break;
        case 4:
                rs1=amount/1;
                amount= amount%1;
                cout<<"The number of 1 rs notes are"<<rs1<<endl;
                break;

        default:
        cout<<"Invalid Input"<<endl;

    }
return 0;
}