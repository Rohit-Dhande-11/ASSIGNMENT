#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input integer

    int sumEven = 0, sumOdd = 0;  // Variables to store sums

    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        if (digit % 2 == 0) {
            sumEven += digit;  // Add to even sum if even
        } else {
            sumOdd += digit;   // Add to odd sum if odd
        }
        n /= 10;  // Remove the last digit
    }

    cout << sumEven << " " << sumOdd;  // Print results

    return 0;
}
