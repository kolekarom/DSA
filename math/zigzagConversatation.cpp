#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) { // O(n) time, O(n) space
        if (numRows == 1) { // if only one row, return the string as it is
            return s; // O(1) time
        }
        vector<string> g(numRows); // initialize a vector of strings
        int i = 0, k = -1; // initialize two pointers
        for (char c : s) { // iterate over the string to fill the vector of strings
            g[i] += c; // add the character to the current row
            if (i == 0 || i == numRows - 1) { // if at the top or bottom row
                k = -k; // change the direction 
            }
            i += k; // move to the next row
        }
        string ans; // initialize an empty string
        for (auto& t : g) { // iterate over the vector of strings
            ans += t; // add the characters to the result string
        }
        return ans; // return the result string
    }
};
int main() {
    Solution solution;
    string s = "PAYPALISHIRING"; // example string
    int numRows = 3; // number of rows
    cout << solution.convert(s, numRows) << endl; // print the result
    return 0;
}