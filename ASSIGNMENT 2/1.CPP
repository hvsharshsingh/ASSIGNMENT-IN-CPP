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

int main() {
    int num;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Checking if the number is prime
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is a composite number." << endl;
    }

    return 0;
}