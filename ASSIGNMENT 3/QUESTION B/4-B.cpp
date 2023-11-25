#include <iostream>
using namespace std;
class IsPrime {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range:";
    cin >> start >> end;
  }

  bool checkPrime(int num) {

    for (int i = 2; i * i <= num; i++) {
     if(num%i==0){
      return false;
     }
    }
    return true;
  }

  void PrintPrime(){
    cout << "Prime Numbers in the range " << start << " to " << end << " are " << endl;
    for (int i = start;i<=end; i++)
    {
      if (checkPrime(i))
      {
        cout<<" "<<i;
      }
    }
    cout<<endl;
  }
};

int main() {
  IsPrime P;
  P.getRange();
  P.PrintPrime();

  return 0;
}