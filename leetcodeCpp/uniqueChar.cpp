#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) { // O(n) time complexity
        unordered_map<char, int> freq;  
        for (char c : s){
            freq[c]++;  //this stores thr frequency of each character means how many times it appears in the string
        }
        for (int i=0;i<s.length();i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    string str = "loveleetcode";
    cout << " unique char is : ";
    cout<<s.firstUniqChar(str)<<endl;
    return 0;
}