#include <iostream>
using namespace std;

class Sum {
  private:
    int number;
  public:
    void getNumber() {
      cout << "Enter Number:";
      cin >> number;
    }
  int add() {
    int sum = 0, remain;

    while (number) {
      remain = number % 10;
      sum = sum + remain;
      number = number / 10;
    }
    return sum;
  }
};

int main() {
  Sum S;
  int sum;
  S.getNumber();
  sum = S.add();
  cout << "Sum of all digits of the number is " << sum;

  return 0;
}