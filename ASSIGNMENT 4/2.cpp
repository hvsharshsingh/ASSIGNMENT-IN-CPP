#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize the string
    MyString(const string& s) : str(s) {}

    // Member function to replace a character in the string
    void replaceChar(char oldChar, char newChar) {
        for (char& c : str) {
            if (c == oldChar) {
                c = newChar;
            }
        }
    }

    // Member function to get the modified string
    const string& getString() const {
        return str;
    }
};

int main() {
    // Create an object of the MyString class
    MyString myStringObject("Hello, World!");

    // Replace 'o' with 'x' in the string
    myStringObject.replaceChar('o', 'x');

    // Get the modified string and print it
    cout << "Modified string: " << myStringObject.getString() << endl;

    return 0;
}
