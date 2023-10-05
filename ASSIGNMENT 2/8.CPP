#include <iostream>
using namespace std;

void decimalToOctal(int decimalNum) {
    if (decimalNum == 0) {
        cout << "Octal: 0" << endl;
        return;
    }

    int octalNum[100];
    int index = 0;

    while (decimalNum > 0) {
        octalNum[index] = decimalNum % 8;
        decimalNum /= 8;
        index++;
    }

    cout << "Octal: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << octalNum[i];
    }
    cout << endl;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToOctal(decimalNumber);

    return 0;
}