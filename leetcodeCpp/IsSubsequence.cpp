#include<iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) { // s is the subsequence, t is the main string
        int sp = 0; // pointer for s
        int tp = 0; // pointer for t
        while(sp < s.length() && tp < t.length()){ // loop until we reach the end of either string
            if(s[sp] == t[tp]){ // if the characters match then move the pointer of s
                sp++; // if we find a match, move the pointer for s
            }
            tp++; // move the pointer for t regardless of whether we found a match or not
        }
        return sp == s.length(); // if we have reached the end of s, then it is a subsequence
    }
};
int main(){
    Solution solution; // create an instance of the class
    string s = "abc"; // the subsequence
    string t = "ahbgdc"; // the main string
    cout << solution.isSubsequence(s, t) << endl; // check if s is a subsequence of t
    return 0;

}