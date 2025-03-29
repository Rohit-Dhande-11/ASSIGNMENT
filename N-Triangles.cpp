#include <iostream>
using namespace std;

void nTriangle(int n) {
    for (int i = 1; i <= n; i++) {  // Loop for each row
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            cout << j << " ";
        }
        cout << endl;  // Move to the next line after printing a row
    }
}

int main() {
    int n;
    cin >> n;
    nTriangle(n);
    return 0;
}
