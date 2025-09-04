#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { // O(n*m) time complexity
        if (strs.empty()) return ""; // edge case is empty list for strs

        string pref = strs[0]; // initialize the prefix as the first string
        int prefLen = pref.length(); // get the length of the prefix

        for (int i = 1; i < strs.size(); i++) { // loop through the rest of the strings
            string s = strs[i]; // get the current string
            while (prefLen > s.length() || pref != s.substr(0, prefLen)) { // loop until the prefix is not a prefix of the current string
                prefLen--; // decrease the length of the prefix
                if (prefLen == 0) { // if the prefix is empty, return an empty string
                    return ""; // return an empty string
                }
                pref = pref.substr(0, prefLen); // update the prefix
            }
        }

        return pref;
    }
};
int main() {
    Solution solution;
    vector<string> strs = {"flower","flow","flight"};
    cout << solution.longestCommonPrefix(strs) << endl;
    return 0;
    
}