#include <iostream>
using namespace std;

int main() {
    char character;
    
    // Taking input from the user
    cout << "Enter a character: ";
    cin >> character;
    
    // Casting the character to an integer to get the ASCII value
    int asciiValue = static_cast<int>(character);
    
    // Printing the ASCII value
    cout << "ASCII value of " << character << " is " << asciiValue << endl;
    
    return 0;
}