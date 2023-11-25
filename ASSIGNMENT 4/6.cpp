#include <iostream>

class CharChecker {
private:
    char ch;

public:
    // Constructor to initialize the character
    CharChecker(char c) : ch(c) {}

    // Member function to check if the character is uppercase
    bool isUppercase() const {
        return (ch >= 'A' && ch <= 'Z');
    }

    // Member function to check if the character is lowercase
    bool isLowercase() const {
        return (ch >= 'a' && ch <= 'z');
    }

    // Member function to check if the character is a digit
    bool isDigit() const {
        return (ch >= '0' && ch <= '9');
    }

    // Member function to check if the character is a special symbol
    bool isSpecialSymbol() const {
        return !(isUppercase() || isLowercase() || isDigit());
    }
};

int main() {
    // Create an object of the CharChecker class
    CharChecker charCheckerObject('A');

    // Check and print the type of the character
    if (charCheckerObject.isUppercase()) {
        std::cout << "The character is uppercase." << std::endl;
    } else if (charCheckerObject.isLowercase()) {
        std::cout << "The character is lowercase." << std::endl;
    } else if (charCheckerObject.isDigit()) {
        std::cout << "The character is a digit." << std::endl;
    } else if (charCheckerObject.isSpecialSymbol()) {
        std::cout << "The character is a special symbol." << std::endl;
    }

    return 0;
}
