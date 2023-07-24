#include<iostream>
using namespace std;
int main() {
    int rows, i, j;

    cout << "Enter the number of rows for the inverted left half pyramid: ";
    cin >> rows;

    i = 1;
    while (i <= rows) {
        // Print asterisks in each row
        j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }

        cout <<endl;
        i=i+1;
    }

    return 0;
}
