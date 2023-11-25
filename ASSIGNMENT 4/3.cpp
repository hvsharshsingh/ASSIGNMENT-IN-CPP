#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize the string
    MyString(const string& s) : str(s) {}

    // Member function to concatenate another string
    void concatenate(const string& other) {
        str += other;
    }

    // Member function to get the concatenated string
    const string& getString() const {
        return str;
    }
};

int main() {
    // Create an object of the MyString class
    MyString myStringObject("Hello, ");

    // Concatenate "World!" to the string
    myStringObject.concatenate("World!");

    // Get the concatenated string and print it
    cout << "Concatenated string: " << myStringObject.getString() << endl;

    return 0;
}
