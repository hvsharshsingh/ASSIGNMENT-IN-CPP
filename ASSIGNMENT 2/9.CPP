#include <iostream>
using namespace std;

void decimalToHexadecimal(int decimalNum) {
    cout << "Hexadecimal: " << hex << decimalNum << endl;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToHexadecimal(decimalNumber);

    return 0;
}