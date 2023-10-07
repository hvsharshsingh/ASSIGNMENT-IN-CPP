#include <iostream>
#include <cmath>
using namespace std;
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
void printRange(int start, int end) {
    int temp = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
        temp = temp + i;
    }
    cout<<"Sume of range of numbers is : "<<temp;
}
int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    printRange(start, end);
    return 0;
}