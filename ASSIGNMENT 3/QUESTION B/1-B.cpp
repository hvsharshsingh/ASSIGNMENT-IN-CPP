#include <iostream>
using namespace std;
class TABLE {
 private:
  int number;
 public:
  void getNumber() {
    cout << "Enter Number: ";
    cin >> number;
  }
  void table() {
    for (int index = 1; index <= 10; index++) {
      cout << number << "*" << index << " = " << number * index << endl;
    }
  }
};

int main() {
  TABLE T;
  T.getNumber();
  T.table();
  return 0;
}