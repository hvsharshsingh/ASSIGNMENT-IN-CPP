#include <iostream>
#include <string>

using namespace std;

class StringComparator {
private:
    string str1;
    string str2;

public:
    // Constructor to initialize the strings
    StringComparator(const string& s1, const string& s2) : str1(s1), str2(s2) {}

    // Member function to compare the two strings
    int compareStrings() const {
        return str1.compare(str2);
    }
};

int main() {
    // Create an object of the StringComparator class
    StringComparator stringComparatorObject("Hello", "World");

    // Compare the two strings
    int result = stringComparatorObject.compareStrings();

    // Print the result of the comparison
    if (result == 0) {
        cout << "The two strings are equal." << endl;
    } else if (result < 0) {
        cout << "The first string is less than the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}
