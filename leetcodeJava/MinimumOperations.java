public class MinimumOperations {
    static class Solution {
        public int minimumOperations(int[] nums) {
           int res = 0;
            for(int i : nums){
                if(i % 3 != 0){
                    res++;
                }
            }
            return res;
           
        }
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {1, 2, 3, 4, 5}; // Example input
        int result = solution.minimumOperations(nums);
        System.out.println("Minimum operations needed: " + result);
    }
}