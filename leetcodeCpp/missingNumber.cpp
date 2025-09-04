#include<iostream>
#include<vector>
using namespace std;
class Solution {
public: 
    int missingNumber(vector<int>& nums) {  // O(n) time complexity
        int result = nums.size();  // initialize result as the size of the array
        for (int i = 0; i< nums.size(); i++){ // iterate through the array
            result += i-nums[i]; // subtract the current number from the result
        }
        return result; // return the result
    }
};
int main() {
    Solution solution;
    vector<int> nums = {0,1,3};
    cout << solution.missingNumber(nums) << endl;
}