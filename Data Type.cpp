#include <iostream>
using namespace std;

int main() {
    string dataType;
    cin >> dataType;  // Read input

    // Check the data type and print corresponding size
    if (dataType == "Integer") {
        cout << 4;
    } else if (dataType == "Long") {
        cout << 8;
    } else if (dataType == "Float") {
        cout << 4;
    } else if (dataType == "Double") {
        cout << 8;
    } else if (dataType == "Character") {
        cout << 1;
    } else {
        cout << "Invalid Data Type"; // Handles unexpected input
    }

    return 0;
}
