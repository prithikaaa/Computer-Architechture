#include <iostream>
using namespace std;

// Function to perform Booth's Algorithm for signed multiplication
int boothAlgorithm(int multiplicand, int multiplier) {
    int A = multiplicand; // Multiplicand
    int Q = multiplier;   // Multiplier
    int M = 0;            // Initialize the product to 0
    int count = 8;        // Number of bits for signed 8-bit numbers

    // Extend A and Q to handle sign extension
    if (A < 0)
        A = (1 << count) + A;
    if (Q < 0)
        Q = (1 << count) + Q;

    // Initialize Q-1 as 0 for right-shift operations
    int Q_1 = 0;

    // Perform Booth's Algorithm iterations
    while (count > 0) {
        // Check if the last two bits of Q are 01
        if ((Q & 1) == 1 && Q_1 == 0) {
            M += A; // Add multiplicand to product
        }
        // Check if the last two bits of Q are 10
        else if ((Q & 1) == 0 && Q_1 == 1) {
            M -= A; // Subtract multiplicand from product
        }

        // Right shift M and Q
        M >>= 1;
        Q_1 = Q & 1; // Store the last bit of Q before shifting
        Q >>= 1;
        // Decrement count for each iteration
        count--;
    }

    // Handle overflow for signed 8-bit numbers
    if (M >= (1 << (count - 1)) || M < -(1 << (count - 1))) {
        cout << "Overflow occurred." << endl;
        return -1;
    }

    // Handle the result for negative numbers
    if ((multiplier < 0) ^ (multiplicand < 0)) {
        return -M;
    }
    return M;
}

int main() {
    int multiplicand, multiplier;
    cout << "Enter the multiplicand: ";
    cin >> multiplicand;
    cout << "Enter the multiplier: ";
    cin >> multiplier;

    int product = boothAlgorithm(multiplicand, multiplier);
    if (product != -1) {
        cout << "Product of " << multiplicand << " and " << multiplier << " is: " << product << endl;
    }

    return 0;
}
