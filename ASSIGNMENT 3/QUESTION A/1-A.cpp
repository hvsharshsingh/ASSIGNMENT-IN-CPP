#include <iostream>
using namespace std;

class Reverse {
 private:
  int number;

 public:
  void reverse(int n) {
    number = n;
    int remain, reverse = 0;
    while (number) {
      remain = number % 10;
      reverse = (reverse * 10) + remain;
      number = number / 10;
    }
    cout << "Reverse of " << n << " is " << reverse << endl;
  }
};

int main() {
  Reverse R;
  int number;
  cout << "Enter Number: ";
  cin >> number;
  R.reverse(number);
  return 0;
}