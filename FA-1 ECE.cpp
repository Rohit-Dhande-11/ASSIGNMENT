#include <iostream>
using namespace std;

// Function to return maximum of two numbers (Pass by value)
int Maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Function to swap two numbers (Pass by reference)
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int test, a, b;
    cin >> test >> a >> b;

    if (test == 1) {
        cout << Maximum(a, b) << endl;  // Call Maximum function
    } else if (test == 2) {
        Swap(a, b);  // Call Swap function
        cout << a << " " << b << endl;
    }

    return 0;
}