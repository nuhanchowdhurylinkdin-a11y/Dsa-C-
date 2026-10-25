#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 5, 6, 6, 6, 6, 7, 8, 32, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique) cout << "Value: " << arr[i] << endl;
    }

    return 0;
}