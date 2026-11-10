#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vec = {1,2,2,1,3,4,55,5,5};

    bool isMatch = false;
    
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec.size(); j++) {
            if(i == j) continue;
            if(vec[i] == vec[j]) {
                isMatch = true;
                break;
            }
            
            isMatch = false;
        }

        if(isMatch == false) cout << "The unique number: " << vec.at(i) << endl;
    }

    return 0;
}