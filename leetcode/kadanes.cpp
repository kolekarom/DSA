#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int maxsubArray(vector<int> & nums) {
        int result = nums[0];
        int sum = 0;
        for (int n : nums) {
            if (sum < 0){
                sum = 0;
            }
            sum += n;
            result = max(result , sum);
        }
        return result;
    }

};
int main() {
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1};
    cout << s.maxsubArray(nums) << endl;
    return 0;
}