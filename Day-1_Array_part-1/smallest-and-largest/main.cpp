#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;

    return 0;
}