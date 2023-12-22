#include <iostream>

// Base class
class Shape {
public:
    // Member function in the base class
    void displayShape() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Intermediate class derived from Shape
class Rectangle : public Shape {
public:
    // Member function in the intermediate class
    void displayRectangle() {
        std::cout << "This is a rectangle." << std::endl;
    }
};

// Derived class derived from Rectangle
class Square : public Rectangle {
public:
    // Member function in the derived class
    void displaySquare() {
        std::cout << "This is a square." << std::endl;
    }
};

int main() {
    // Creating an object of the derived class
    Square square;

    // Accessing member functions from all levels of the inheritance hierarchy
    square.displayShape();      // Accessing the base class member function
    square.displayRectangle();  // Accessing the intermediate class member function
    square.displaySquare();     // Accessing the derived class member function

    return 0;
}