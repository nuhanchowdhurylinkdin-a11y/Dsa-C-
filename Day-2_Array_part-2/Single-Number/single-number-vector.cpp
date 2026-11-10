#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vec = {4,2,2,1,1};

    // bool isMatch = false;
    
    // for(int i = 0; i < vec.size(); i++) {
    //     for(int j = 0; j < vec.size(); j++) {
    //         if(i == j) continue;
    //         if(vec[i] == vec[j]) {
    //             isMatch = true;
    //             break;
    //         }
            
    //         isMatch = false;
    //     }

    //     if(isMatch == false) cout << "The unique number: " << vec.at(i) << endl;
    // }

    // after dsa

    int ans = 0;

    for(int val : vec) {
        ans ^= val;
    }

    cout << "The unique number is: " << ans << endl;

    return 0;
}