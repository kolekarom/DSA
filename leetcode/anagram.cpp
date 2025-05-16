#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length())  //check the length
        return false; 

    sort(s.begin(), s.end()); 
    sort(t.begin(), t.end()); 

    return s == t; // Directly return the comparison result
}

int main() {
    string s, t; 
    cin >> s >> t; 
    cout << (isAnagram(s, t) ? "Anagram" : "Not anagrams") << endl; 
    return 0;
}
