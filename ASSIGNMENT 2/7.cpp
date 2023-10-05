#include <iostream>
using namespace std;

void decimalToBinary(int decimalNum) {
    if (decimalNum == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    int binaryNum[32];
    int index = 0;

    while (decimalNum > 0) {
        binaryNum[index] = decimalNum % 2;
        decimalNum /= 2;
        index++;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }
    cout << endl;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);

    return 0;
}