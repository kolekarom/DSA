#include <iostream>
#include <algorithm>
#include <unordered_set>  // Include this for unordered_set

using namespace std;

class Solution {
public:
    string reverseVowel(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                                      'A', 'E', 'I', 'O', 'U'};  // ✅ No reference (&) here

        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s = "hello";
    cout << solution.reverseVowel(s) << endl;  // Output: "holle"

    return 0;
}
