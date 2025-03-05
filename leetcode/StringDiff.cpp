#include<iostream>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {  // s is the string without the extra character, t is the string with the extra character
        int s1 = 0, t1 = 0; // s1 and t1 are the sums of the ASCII values of the characters in s and

        for (int i = 0; i < s.length(); i++) { // loop through s
            s1 += s[i];  // Sum ASCII values of s 
        }

        for (int i = 0; i < t.length(); i++) {  // ✅ Iterate over full t
            t1 += t[i];  // Sum ASCII values of t
        }

        return char(t1 - s1);  // The extra character
    }
};
int main() {
    Solution solution;
   
    string s = "abcd";
    string t = "abcde";
    cout << solution.findTheDifference(s, t) << endl;
    return 0;
}
