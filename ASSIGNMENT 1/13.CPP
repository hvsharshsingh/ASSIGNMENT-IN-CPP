#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculating factorial using iteration
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Printing the factorial
    cout << "The factorial of " << number << " is: " << factorial << endl;

    return 0;
}