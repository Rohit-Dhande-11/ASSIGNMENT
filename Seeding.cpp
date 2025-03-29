#include <iostream>
using namespace std;

void printUpperTriangle(int N) {
    for (int i = 0; i < N; i++) {  // Row loop
        for (int j = 0; j < N - i; j++) {  // Print stars (N-i times)
            cout << "* ";
        }
        cout << endl;  // Move to the next line
    }
}

int main() {
    int T, N;
    cin >> T;  // Read number of test cases

    while (T--) {
        cin >> N;
        printUpperTriangle(N);
    }

    return 0;
}