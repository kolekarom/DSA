#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) { // O(n) time, O(1) space
        int left = 0; // left pointer
        for(int right = 0; right<nums.size(); right++){ // right pointer with a loop for each element
            if(nums[right] != 0){ // if the element is not zero 
                swap(nums[right] , nums[left]); // swap the element with the left pointer
                left++; // move the left pointer
            }
            
        }
        


    }
};
int main(){
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" " << endl;

    }

}