#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;  // Base cases
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;  // Compute the next Fibonacci number
        a = b;      // Shift values for the next iteration
        b = c;
    }
    return c;  // Return the n-th Fibonacci number
}

int main() {
    int n;
    cin >> n;  // Take input for n

    cout << fibonacci(n);  // Print the n-th Fibonacci number

    return 0;
}
