#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,4,5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int primaryIndex = 0;
    int reverseIndex = size - 1;

    // original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    while(primaryIndex < reverseIndex) {
        swap(nums[primaryIndex], nums[reverseIndex]);
        primaryIndex++;
        reverseIndex--;
    }

    // reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
}