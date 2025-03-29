#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 1; i <= n; i++) {  // Loop for each row
        for (int j = 1; j <= i; j++) {  // Loop for printing '*'
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    nForest(n);
    return 0;
}
