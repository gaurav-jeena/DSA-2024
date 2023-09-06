#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    
    return -1; // Key not found
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[7] = {3,5,6,9,12,13,15}; 

    int evenindex = binarysearch(even, 6, 12);

    cout << "The key is present at index " << evenindex << endl;

    int oddindex = binarysearch(odd, 7, 9);

    cout << "The key is present at index " << oddindex;

    return 0;
}
