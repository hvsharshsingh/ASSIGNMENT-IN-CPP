#include <iostream>
using namespace std;

void print();

int main()
{
    print();
    return 0;
}

void print()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
        
    }
}