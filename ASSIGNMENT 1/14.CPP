#include <iostream>
using namespace std;

// Function to calculate the power of a number
int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int A, B;

    // Taking input from the user
    cout << "Enter the base number (A): ";
    cin >> A;
    cout << "Enter the exponent (B): ";
    cin >> B;

    // Calculating the power of the number
    int power = calculatePower(A, B);

    // Printing the result
    cout << A << " raised to the power of " << B << " is: " << power << endl;

    return 0;
}