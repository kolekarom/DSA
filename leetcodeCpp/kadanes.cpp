#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int maxsubArray(vector<int> & nums) {
        int result = nums[0]; // store the maximum sum of subarray ending at current position
        int sum = 0; // store the sum of subarray ending at current position
        for (int n : nums) { // iterate through the array
            if (sum < 0){ // if sum is negative, reset sum to current number
                sum = 0; // reset sum
            }
            sum += n; // add current number to sum
            result = max(result , sum); // update result if sum is greater than result and add to the result
        }
        return result;
    }

};
int main() {
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1}; // example array
    cout << s.maxsubArray(nums) << endl;
    return 0;
}