#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);  // Swap elements
        left++;
        right--;
    }
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> reversedArr = reverseArray(arr);

    for (int num : reversedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}