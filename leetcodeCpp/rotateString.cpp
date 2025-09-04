#include<iostream>
using namespace std;

class Solution {
    public:
    bool rotateString(string s , string goal) { // Function to check if s is a rotation of goal
        if (s.length() != goal.length()) { // If lengths are not equal, it cannot be a rotation
            return false;
        }
        string s1 = s + s; // Concatenate s with itself
        if (s1.find(goal) != string::npos) { // Check if goal is a substring of s1
            return true;
        }
        return false;  
    }
};

int main() {
    Solution str; // Create an object of the class

    string s = "abc";
    string goal = "cab";

    cout << str.rotateString(s, goal) << endl; // Corrected function call
    return 0;
}
