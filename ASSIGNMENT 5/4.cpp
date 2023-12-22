#include <iostream>

// First base class
class Shape {
public:
    // Member function in the first base class
    void displayShape() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Second base class
class Color {
public:
    // Member function in the second base class
    void displayColor() {
        std::cout << "This object has a color." << std::endl;
    }
};

// Derived class inheriting from both Shape and Color (multiple inheritance)
class ColoredShape : public Shape, public Color {
public:
    // Member function in the derived class
    void displayColoredShape() {
        std::cout << "This is a colored shape." << std::endl;
    }
};

int main() {
    // Creating an object of the derived class
    ColoredShape coloredShape;

    // Accessing member functions from all base classes and the derived class
    coloredShape.displayShape();          // Accessing the member function from the first base class
    coloredShape.displayColor();          // Accessing the member function from the second base class
    coloredShape.displayColoredShape();   // Accessing the member function from the derived class

    return 0;
}