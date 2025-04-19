#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) { // O(n) time, O(n) space
        reverse(s.begin(), s.end()); // reverse the whole string
        int n = s.size(); // get the length of the string
        int left = 0; // left pointer
        int right = 0; // right pointer
        int i = 0; // index
        while (i < n) { // iterate through the string
            while (i < n && s[i] == ' ') { // skip spaces
                i++; // move to the next character and skip spaces
            if (i == n) break; // if we reach the end of the string, move to the next word
                break; // if we find a word, move to the next word and do not skip spaces
            while (i < n && s[i] != ' ') { // find the end of the word
                s[right++] = s[i++]; // copy the word to the right side
            }
            reverse(s.begin() + left, s.begin() + right); // reverse the word
            s[right++] = ' '; // add a space after the word
            left = right; // move the left pointer to the right of the word
            i++; // move to the next character
        }
        s.resize(right - 1);
        return s;
    }
};