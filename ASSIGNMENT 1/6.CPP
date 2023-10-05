#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;
    
    // Taking input from the user for the temperature in Fahrenheit
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    // Converting Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    
    // Printing the temperature in Celsius
    cout << "The temperature in Celsius is: " << celsius << endl;
    
    return 0;
}