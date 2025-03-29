#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  // Take input for both numbers

    // Compare a and b
    if (a < b) {
        cout << "smaller";
    } else if (a > b) {
        cout << "greater";
    } else {
        cout << "equal";
    }

    return 0;
}
