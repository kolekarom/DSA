#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Step 1: Filter the string (remove non-alphanumeric characters & convert to lowercase)
        string filtered;
        for (char c : s) {
            if (isalnum(c)) { //this keeps only alphanumeric characters
                filtered += tolower(c);  //convert to lowercase
            }
        }

        // Step 2: Use two-pointer technique to check for palindrome
        int left = 0, right = filtered.size() - 1;
        while (left < right) {
            if (filtered[left] != filtered[right]) { //if mismatch situation happens , this is not palindrome
                return false;
            }
            left++;
            right--;
        }
           
        return true;//while checking from both ends , if matches then it is palindrome
    }
};

// Driver code for testing
int main() {
    Solution solution;
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input); //it reads the entire line and takes the input
    
    if (solution.isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}
