#include <iostream>
using namespace std;

long long sumOfNaturalNumbers(long long n) {
    return (n * (n + 1)) / 2;  // Using the formula
}

int main() {
    long long n;
    cin >> n;

    cout << sumOfNaturalNumbers(n) << endl;
    return 0;
}
