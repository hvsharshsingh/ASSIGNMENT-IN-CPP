#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Reversing the digits of the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Printing the reversed number
    cout << "The reversed number is: " << reversedNumber << endl;

    return 0;
}