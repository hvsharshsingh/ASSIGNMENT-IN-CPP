#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Taking input from the user for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Swapping the numbers using XOR bitwise operator
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // Printing the swapped numbers
    cout << "After swapping, the numbers are: " << num1 << " " << num2 << endl;

    return 0;
}