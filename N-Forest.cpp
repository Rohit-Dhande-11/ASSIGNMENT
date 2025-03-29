#include <iostream>
using namespace std;

void printForest(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    printForest(N);

    return 0;
}