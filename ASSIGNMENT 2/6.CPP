#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int digitSum = sumOfDigits(number);

    cout << "Sum of digits of " << number << " is: " << digitSum << endl;

    return 0;
}