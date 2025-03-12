// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n , 1);
//         for (int i = 0; i<n; i++){
//             // int product = 1;
//             for (int j = 0; j<n; j++){
//                 if (i != j){
//                     ans[i] *= nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
// };

//this is brute force solution with time complexity of O(n^2)