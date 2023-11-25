#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize the string
    MyString(const string& s) : str(s) {}

    // Member function to get the length of the string
    int getLength() const {
        return str.length();
    }
};

int main() {
    // Create an object of the MyString class
    MyString myStringObject("Hello, World!");

    // Use the getLength() member function to find the length
    cout << "Length of the string: " << myStringObject.getLength() << endl;

    return 0;
}
