#include <iostream>
#include <vector>
using namespace std;

int findSingleNumber(vector<int> &nums) {
    int singleNumber = 0;

    for(int val: nums) {
        singleNumber ^= val;
    }

    return singleNumber;
}

int main() {
    vector<int> arr = {4,1,2,1,2};

    cout << "Single number: " << findSingleNumber(arr) << endl;

    return 0;
}