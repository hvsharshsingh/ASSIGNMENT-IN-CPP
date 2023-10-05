#include <iostream>
using namespace std;

int main() {
    float basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;
    
    // Taking input from the user for the basic salary
    cout << "Enter Ramesh's basic salary: ";
    cin >> basicSalary;
    
    // Calculating the Dearness Allowance
    dearnessAllowance = 0.4 * basicSalary;
    
    // Calculating the House Rent Allowance
    houseRentAllowance = 0.2 * basicSalary;
    
    // Calculating the gross salary
    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;
    
    // Printing the gross salary
    cout << "Ramesh's gross salary is: " << grossSalary << endl;
    
    return 0;
}