#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) { // O(n) time complexity
        int cnt[128] = {0}; // ASCII table size
        int ans = 0, n = s.size(); // initialize answer and string length
        for (int l = 0, r = 0; r < n; ++r) { // two pointers
            ++cnt[s[r]]; // count character
            while (cnt[s[r]] > 1) { // if character appears more than once
                --cnt[s[l++]]; // remove leftmost character
            } 
            ans = max(ans, r - l + 1); // update answer
        }
        return ans; // return answer
    }
};
int main(){
    Solution solution;
    string s = "abcabcbb"; // test string
    cout << solution.lengthOfLongestSubstring(s) << endl; 
    return 0;

}