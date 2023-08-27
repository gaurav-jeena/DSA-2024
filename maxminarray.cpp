#include <iostream>
#include <climits>
using namespace std;

int get_max(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int get_min(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) { // Corrected this condition to "<"
            min = num[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    
    int num[100];
    
    // Taking input for the array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    
    cout << "Maximum Value: " << get_max(num, size) << endl;
    cout << "Minimum Value: " << get_min(num, size) << endl;
    
    return 0;
}
