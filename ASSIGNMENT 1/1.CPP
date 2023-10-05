// WAP to add,subtract,multiply and divide two numbers.
#include <iostream>
using namespace std;
    // fucntion declearation...
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);

int main()
{
    // Variable declearation...
    int num1, num2;
    int choise;
    int sum;
    int sub;
    int mult;

    // main program..
    cout << "Enter first number:";
    cin >> num1;

    cout << "Enter second number";
    cin >> num2;
    cout << endl;

    cout << "Select an operation:" << endl
         << "1) Addition:" << endl
         << "2) Subtract" << endl
         << "3) multiply";
    cin >> choise;
    cout << endl;

    //switch case for user choise...
    switch (choise)
    {

    case 1:
        sum = add(num1, num2);
        cout <<"Sum of given two numberes:"<<sum;
        break;

    case 2:
        sub = subtract(num1, num2);
        cout <<"Subtraction of given two numberes:"<<sub;
        break;

    case 3:
        mult = multiply(num1, num2);
        cout <<"Multiply of given two numberes:"<<mult;
        break;

    default:
        cout << "Opps! it's look's like you entered worng keyword try its again:";
    }

    return 0;
}


//function creation...
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}