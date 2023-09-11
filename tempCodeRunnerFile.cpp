#include <iostream>
using namespace std;

int pivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[s]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int main() {
    int arr[5] = {7, 8, 5,1, 3};
    int pivotIndex = pivot(arr, 5);
    cout << "The pivot element is at index " << pivotIndex << endl;
    return 0;
}
