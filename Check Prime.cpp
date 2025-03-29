#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;  // 2 is the only even prime
        if (n % 2 == 0) return false;  // Eliminate even numbers
        
        for (int i = 3; i * i <= n; i += 2) {  // Check odd numbers only
            if (n % i == 0) return false;
        }
        
        return true;
    }
};

int main() {
    int n;
    cin >> n;
    
    Solution obj;
    cout << (obj.isPrime(n) ? "YES" : "NO") << endl;

    return 0;
}