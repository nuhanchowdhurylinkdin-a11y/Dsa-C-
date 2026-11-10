#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4};
    
    for(int data: vec) { // for eatch loop
        cout << data << endl;
    }
    return 0;
}