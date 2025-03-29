#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfDivisors(int n) {
        int totalSum = 0;

        // Iterate through all numbers and distribute divisors efficiently
        for (int i = 1; i <= n; i++) {
            totalSum += (n / i) * i;  // Each i contributes to (n / i) numbers
        }

        return totalSum;
    }
};

int main() {
    int n;
    cin >> n;
    
    Solution obj;
    cout << obj.sumOfDivisors(n) << endl;

    return 0;
}