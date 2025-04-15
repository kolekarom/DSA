#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution { // O(n) time complexity
public:
    string intToRoman(int num) { // O(1) space complexity
        vector <string> cs = { "M" , "CM" ,"D","CD","C","XC","L","XL","X","IX","V","IV","I"}; // 1000, 900, 500, 400, 100, 90,
    vector <int> vs = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans; // to store the result
    for (int i = 0; i < cs.size(); ++i) { // iterate through the list of roman numerals and their corresponding integer values
            while (num >= vs[i]) { // while the number is greater than or equal to the current integer value then subtract the integer value from the number and append the corresponding roman numeral to the result
                num -= vs[i]; // subtract the integer value from the number
                ans += cs[i]; // append the roman numeral to the result
            }
        }
        return ans; // return the result
    }
};
int main() {
    Solution solution;
    cout << solution.intToRoman(3) << endl; // III
    return 0;

}