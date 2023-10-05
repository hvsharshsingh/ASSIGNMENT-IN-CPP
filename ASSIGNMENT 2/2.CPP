#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers within a range
void printPrimesInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start, end;

    // Taking input from the user
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    // Printing prime numbers within the range
    printPrimesInRange(start, end);

    return 0;
}