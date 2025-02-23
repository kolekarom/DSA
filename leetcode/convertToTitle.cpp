#include <iostream>
using namespace std;

class Solution {//
public:
    string convertToTitle(int columnNumber) {//taking column number as input
        string result = "";//blank string to store the result
        
        while (columnNumber > 0) { //if column number is greater than 0
            columnNumber--;  // Adjust for 1-based indexing
            char letter = 'A' + (columnNumber % 26); // Get the corresponding letter and do the modulo operation
            result = letter + result;  // store the letter in the result string and move to the next iteration
            columnNumber /= 26;  // this will give the quotient of the number divided by 26 and will be used in the next iteration
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    int columnNumber;

    // Taking user input
    cout << "Enter column number: ";
    cin >> columnNumber;

    // Printing result
    cout << "Excel Column Title: " << solution.convertToTitle(columnNumber) << endl;

    return 0;
}
