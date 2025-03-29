#include <iostream>
using namespace std;

void printTriangle(int N) {
    for (int i = 1; i <= N; i++) {  // Row loop
        for (int j = 1; j <= i; j++) {  // Print 'i' i times
            cout << i << " ";
        }
        cout << endl;  // Move to the next line
    }
}

int main() {
    int N;
    cin >> N;

    printTriangle(N);

    return 0;
}