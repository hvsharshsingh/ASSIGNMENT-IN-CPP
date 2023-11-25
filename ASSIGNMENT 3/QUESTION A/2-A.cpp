#include <iostream>
using namespace std;
class OddOrEven {
 private:
  int number;
 public:
  void oddoreven(int n) {
    number = n;
    if (number % 2 == 0) {
      cout << number << " is an even number." << endl;
    }
    else {
      cout << number << " is an odd number." << endl;
    }
  }
};

int main() {
  OddOrEven O;
  int number;
  cout << "Enter Number: ";
  cin >> number;
  O.oddoreven(number);
  return 0;
}