#include <iostream>
using namespace std;

class Solution {
    public:
        double myPow(double x, int n) {
            if(n == 0) return 1.0;
            if(x == 0) return 0.0;
            if(x == 1) return 1.0;
            if(x == -1 && n%2 == 0) return 1;
            if(x == -1 && n%2 != 0) return -1;

            long bitForm = n;
            double ans = 1;

            if(n < 0) bitForm = -bitForm;

            while (bitForm > 0)
            {
                if(bitForm%2 == 1) ans *= x;
                x *= x;
                bitForm /= 2;
            }

            if(n < 0) return 1.0/ans;
            return ans;
            
        }
};

int main() {
    Solution sol;

    double val = sol.myPow(-2,3);

    cout << "Value: " << val << endl;

    return 0;
}