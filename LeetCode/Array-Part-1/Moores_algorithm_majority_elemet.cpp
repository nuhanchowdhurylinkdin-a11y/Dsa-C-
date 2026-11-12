#include <iostream>
#include <vector>
using namespace std;

int majorityElemet(vector<int> &nums) {
    int freq = 0, ans = 0;
    for(int val: nums) {
        if(freq == 0) ans = val;
        if(ans == val) freq++;
        else freq--;
    }

    return ans;
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    cout << "Majority Element: " << majorityElemet(arr) << endl;
    return 0;
}