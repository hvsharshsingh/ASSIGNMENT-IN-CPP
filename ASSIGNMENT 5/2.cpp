#include <iostream>

// Base class
class Shape {
public:
    // Member function in the base class
    void displayShape() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class inheriting from the base class (single inheritance)
class Rectangle : public Shape {
public:
    // Member function in the derived class
    void displayRectangle() {
        std::cout << "This is a rectangle." << std::endl;
    }
};

int main() {
    // Creating an object of the derived class
    Rectangle rectangle;

    // Accessing member functions from both the base and derived classes
    rectangle.displayShape();      // Accessing the base class member function
    rectangle.displayRectangle();  // Accessing the derived class member function

    return 0;
}