#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor to initialize the string
    MyString(const string& s) : str(s) {}

    // Member function to check if the string is a palindrome
    bool isPalindrome() const {
        string reversedStr = str;
        reverse(reversedStr.begin(), reversedStr.end());
        return str == reversedStr;
    }
};

int main() {
    // Create an object of the MyString class
    MyString myStringObject("radar");

    // Check if the string is a palindrome
    if (myStringObject.isPalindrome()) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
