#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& str) { //taking a vector of char 
        reverse(str.begin(), str.end()); // Reverse the vector 
    }
};

int main() {
    Solution s; // Create an instance of the Solution class
    
    string str = "Hello World"; // Input string
    vector<char> charVec(str.begin(), str.end()); // Convert string to vector<char>

    s.reverseString(charVec); // Call the function

    string reversedStr(charVec.begin(), charVec.end()); // Convert vector<char> back to string
    cout << reversedStr << endl; // Print reversed string

    return 0;
}
