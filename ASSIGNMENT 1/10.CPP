#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculating the sum of digits
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
