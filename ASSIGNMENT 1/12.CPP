#include <iostream>
using namespace std;

int main() {
    int N;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> N;

    // Generating the table of the number
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}