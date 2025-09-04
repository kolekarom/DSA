#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> rowMap;
        string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";

        for (char c : row1) rowMap[c] = 1;
        for (char c : row2) rowMap[c] = 2;
        for (char c : row3) rowMap[c] = 3;

        vector<string> result;

        for (string word : words) {
            int row = rowMap[tolower(word[0])];
            bool isValid = true;  // Fixed the case here

            for (char c : word) {
                if (rowMap[tolower(c)] != row) {
                    isValid = false;  // Fixed the case here
                    break;
                }
            }

            if (isValid) result.push_back(word);
        }

        return result;
    }
};
int main(){
    Solution solution;
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    vector<string> result = solution.findWords(words);
    for (string word : result) {
        cout << word << endl;
    }
    return 0;
}
