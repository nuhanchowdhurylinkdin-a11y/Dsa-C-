#include <iostream>
using namespace std;

int main () {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size = 5;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(arr1[i] == arr2[j]) {
                cout << "Common: " << arr1[i] << endl;
            }
        }
    }

    return 0;
}