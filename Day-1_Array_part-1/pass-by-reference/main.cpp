#include <iostream>
using namespace std;

void changeValue(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        nums[i] *= 2;
    }
}

int main() {
    int nums[] = {1, 2, 3};
    changeValue(nums, sizeof(nums) / sizeof(nums[0]));

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}