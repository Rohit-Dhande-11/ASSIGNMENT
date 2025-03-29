#include <iostream>
#include <iomanip>  // For setting decimal precision
using namespace std;

int main() {
    int ch;
    cin >> ch;  // Take input for choice

    switch (ch) {
        case 1: {  // Case for circle
            double r;
            cin >> r;
            double area = 3.14159 * r * r;  // Using π ≈ 3.14159
            cout << fixed << setprecision(5) << area;  // Print with 5 decimal places
            break;
        }
        case 2: {  // Case for rectangle
            double l, b;
            cin >> l >> b;
            double area = l * b;
            cout << fixed << setprecision(5) << area;  // Print with 5 decimal places
            break;
        }
        default:
            cout << "Invalid choice";  // If input is not 1 or 2
    }

    return 0;
}
