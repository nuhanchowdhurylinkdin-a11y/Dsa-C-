#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i <size; i++) {
        if(arr[i] == target) return i; // Return the index of the target if found
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    cout << "The targeted index is: " << linearSearch(arr, size, target) << endl;
    return 0;
}