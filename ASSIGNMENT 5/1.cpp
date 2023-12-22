#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
        // Additional initialization code can be added here
    }

    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
        // Additional initialization code can be added here
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
        // Clean up resources, release memory, or perform any necessary cleanup
    }

    // Member function
    void display() {
        std::cout << "Hello from MyClass" << std::endl;
    }
};

int main() {
    // Creating objects of MyClass
    MyClass obj1;  // Calls the default constructor
    MyClass obj2(42);  // Calls the parameterized constructor

    // Accessing member function
    obj1.display();
    obj2.display();

    // Destructor is automatically called when objects go out of scope
    // and the program exits
    return 0;
}