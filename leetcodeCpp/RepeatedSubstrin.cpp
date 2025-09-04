#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) { // O(n) time, O(1) space
        string concatinate = s + s; //this is to check if the string is repeated and concatenated 
        string trimmed = concatinate.substr(1,concatinate.length()-2); //trimming the first and last character 
        return trimmed.find(s) != std::string::npos; //if the trimmed string contains the original string, then it is a repeated substring pattern
    }
};
int main() {
    Solution solution;
    std::string s = "abab";
    std::cout << std::boolalpha << solution.repeatedSubstringPattern(s) << std::
    endl;
}
