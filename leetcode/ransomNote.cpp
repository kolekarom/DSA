#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std; 
class Solution { 
public: 
    bool canConstruct(string ransomNote, string magazine) { //two strings
        unordered_map<char, int> magazineCount; //store the count of each character in magazine
        for (char c : magazine){ //iterate through each character in magazine
            magazineCount[c]++; //increment the count of the character in the map
        }
        for (char c : ransomNote){ //iterate through each character in ransomNote
            if (magazineCount[c] == 0){ //if the count of the character in magazine is 0
                return false; //return false
            }
            magazineCount[c]--; //decrement the count of the character in the map
        } 
        return true; //if we have iterated through all characters in ransomNote without returning false, return true
    }
};
int main() { 
    Solution solution; 
    string ransomNote;
    string magazine;
    cout << "enter the ransom note: ";
    cin >> ransomNote;
    cout << "enter the magazine: ";
    cin >> magazine;
    
    cout << boolalpha << solution.canConstruct(ransomNote, magazine) << endl;    // print output with function call
    return 0;
    
}