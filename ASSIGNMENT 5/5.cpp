#include <iostream>

// Base class with a virtual function
class Shape {
public:
    // Virtual function
    virtual void display() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class overriding the virtual function
class Circle : public Shape {
public:
    // Overridden function
    void display() override {
        std::cout << "This is a circle." << std::endl;
    }
};

// Another derived class overriding the virtual function
class Rectangle : public Shape {
public:
    // Overridden function
    void display() override {
        std::cout << "This is a rectangle." << std::endl;
    }
};

int main() {
    // Creating objects of the derived classes
    Circle circle;
    Rectangle rectangle;

    // Accessing the overridden functions
    circle.display();    // Calls the overridden function in Circle class
    rectangle.display(); // Calls the overridden function in Rectangle class

    // Using a pointer to the base class to achieve polymorphism
    Shape* shapePtr = nullptr;

    // Pointing to the Circle object
    shapePtr = &circle;
    shapePtr->display(); // Calls the overridden function in Circle class

    // Pointing to the Rectangle object
    shapePtr = &rectangle;
    shapePtr->display(); // Calls the overridden function in Rectangle class

    return 0;
}
