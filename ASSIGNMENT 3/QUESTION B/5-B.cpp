#include <iostream>
using namespace std;

class Palindrome {
 private:
  int number;
 public:
  void isPalindrome(int n) {
    number = n;
    int remain, reverse = 0;
    while (number) {
      remain = number % 10;
      reverse = (reverse * 10) + remain;
      number = number / 10;
    }

    if (n == reverse) {
      cout << n << " is a Palindrome." << endl;
    }
    else {
      cout << n << " is not a Palindrome." << endl;
    }
  }
};

int main() {
  Palindrome P;
  int number;

  cout << "Enter Number:";
  cin >> number;
  P.isPalindrome(number);

  return 0;
}