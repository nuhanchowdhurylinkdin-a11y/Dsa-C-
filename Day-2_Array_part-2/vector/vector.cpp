#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4};

    cout << "Size of vector: " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(28);

    cout << "Size of vector after push back: " << vec.size() << endl;

    vec.pop_back();
    cout << "Size of vector after pop back: " << vec.size() << endl;
    cout << "Vector front value: " << vec.front() << endl;
    cout << "Vector back value: " << vec.back() << endl;

    
    for(int data: vec) { // for eatch loop
        cout << data << endl;
    }
    return 0;
}