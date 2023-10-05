#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int totalMarks = 0;
    
    // Taking input from the user for each subject
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        
        // Adding the marks to the total
        totalMarks += marks[i];
    }
    
    // Calculating the aggregate marks
    float aggregateMarks = totalMarks;
    
    // Calculating the percentage marks
    float percentageMarks = (aggregateMarks / (5 * 100)) * 100;
    
    // Printing the aggregate marks and percentage marks
    cout << "Aggregate marks: " << aggregateMarks << endl;
    cout << "Percentage marks: " << percentageMarks << "%" << endl;
    
    return 0;
}