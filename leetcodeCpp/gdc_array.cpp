#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());
        while (min != 0){
            int temp = max % min;
            max = min;
            min = temp;
        }
        return max;
    }
};
int main (){
    Solution sol;
    vector<int> nums = {2, 5, 6, 9, 10};
    cout << "GCD of the array is: " << sol.findGCD(nums) << endl;
    return 0;
}