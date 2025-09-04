#include <iostream>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int> &nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
    }
};

int main() {
    std::vector<int> nums = {4, 1, 2, 1, 2};
    Solution obj;
    std::cout << "Single Number: " << obj.singleNumber(nums) << std::endl;
    return 0;
}
