// https://leetcode.com/problems/height-checker/description/
// 1051. Height Checker

import java.util.Arrays;



class Solution {
    public int heightChecker(int[] heights) {

        int[] expected = heights.clone();   // store original
        Arrays.sort(heights);               // sort the array

        int count = 0;

        for (int i = 0; i < heights.length; i++) {
            if (expected[i] != heights[i]) {
                count++;
            }
        }
        return count;
    }
}

public class heightsChecker {
    public static void main(String[] args) {
        Solution sol = new Solution();

        int[] heights1 = {1,1,4,2,1,3};
        System.out.println(sol.heightChecker(heights1)); // Output: 3

        int[] heights2 = {5,1,2,3,4};
        System.out.println(sol.heightChecker(heights2)); // Output: 5

        int[] heights3 = {1,2,3,4,5};
        System.out.println(sol.heightChecker(heights3)); // Output: 0
    }
}