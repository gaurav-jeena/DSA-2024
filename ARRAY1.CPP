#include <iostream>
using namespace std; // Include this for std::fill

int main() {// Replace with the desired size of the array
    int value = 42;     // Replace with the value you want
    
    int array[5];
    
    // Initialize the array with the specified value using std::fill
    fill(array, array + 5, value);
    
    // Print the initialized array
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    
    return 0;
}
