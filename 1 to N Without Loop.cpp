#include <iostream>
#include <vector>
using namespace std;

void generateArray(int n, vector<int>& arr) {
    if (n == 0) return;  // Base case: Stop when n reaches 0

    generateArray(n - 1, arr);  // Recursive call for n-1
    arr.push_back(n);  // Add current number to array
}

int main() {
    int n;
    cin >> n;

    vector<int> result;
    generateArray(n, result);

    // Print the array
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}