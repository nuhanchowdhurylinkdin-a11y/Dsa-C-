#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums) {
    int maxSum = INT_MIN, currentSum = 0;

    for(int val: nums) {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) currentSum = 0;
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> arr1 = {1};
    cout << "Max sub array sum: " << maxSubArray(arr) << endl;
    cout << "Max sub array sum: " << maxSubArray(arr1) << endl;

    return 0;
}