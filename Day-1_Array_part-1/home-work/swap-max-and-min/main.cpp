#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 15, 28, 1, -15, 24};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxIndex = 0;
    int minIndex = 0;
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }

        if(arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    swap(arr[maxIndex], arr[minIndex]);
    cout << "Array after swapping max and min: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}