class Solution {
    public int maxProduct(int[] nums) {
        int res = 0;
        int curMax = nums[0];

        for(int i = 1; i < nums.length; i++){
            res = Math.max(res,(curMax-1) * (nums[i] - 1));
            curMax = Math.max(curMax,nums[i]);

        }
        return res;
    }
}
public class maxEleArray {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {3, 4, 5, 2};
        int maxProduct = solution.maxProduct(nums);
        System.out.println(maxProduct); // Output: 12
    }
}