#include<iostream>
using namespace std;

void reversealt(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
}

int main() {
    int arr[5] = {2, 3, 4, 5, 7};
    reversealt(arr, 5);
    printarray(arr, 5);
    
    return 0;
}
