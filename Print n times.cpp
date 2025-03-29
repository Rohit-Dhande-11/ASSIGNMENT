#include <iostream>
using namespace std;

void printNinjas(int n) {
    if (n == 0) return;  // Base case: Stop when n reaches 0

    cout << "Coding Ninjas ";  // Print the statement
    printNinjas(n - 1);  // Recursive call with n-1
}

int main() {
    int n;
    cin >> n;

    printNinjas(n);
    cout << endl;  // For clean output formatting

    return 0;
}
