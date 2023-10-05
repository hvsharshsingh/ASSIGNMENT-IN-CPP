#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, maxNum;
    
    // Taking input from the user for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    // Finding the maximum number among the three
    maxNum = num1;
    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
    
    // Printing the maximum number
    cout << "The maximum number is: " << maxNum << endl;
    
    return 0;
}