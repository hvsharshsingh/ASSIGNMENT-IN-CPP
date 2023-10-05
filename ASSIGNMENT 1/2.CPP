#include <iostream>
using namespace std;

int main() {
    float radius;
    const float pi = 3.14159;
    
    // Taking input from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculating area
    float area = pi * radius * radius;
    cout << "Area of the circle: " << area << endl;
    
    // Calculating circumference
    float circumference = 2 * pi * radius;
    cout << "Circumference of the circle: " << circumference << endl;
    
    return 0;
}
