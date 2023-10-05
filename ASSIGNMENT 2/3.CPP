#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int num1 = 0, num2 = 1, nextNum;

    cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 1; i <= n; i++) {
        cout << num1 << " ";

        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }

    cout << endl;
}

int main() {
    int numTerms;

    cout << "Enter the number of terms: ";
    cin >> numTerms;

    printFibonacci(numTerms);

    return 0;
}