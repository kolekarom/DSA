
// https://leetcode.com/problems/single-number/description/
// 136. Single Number
import java.util.*;

class singleNumber {
    
    public int singleNumber(int[] nums) {
        int result=0;
        for(int i=0; i<nums.length; i++) {
            result = result^nums[i];
        }
        return result;
    }
}
public class singleNumber {
    public static void main(String[] args) {
        singleNumber sol = new singleNumber();

        int[] nums1 = {2,2,1};
        System.out.println(sol.singleNumber(nums1)); // Output: 1

        int[] nums2 = {4,1,2,1,2};
        System.out.println(sol.singleNumber(nums2)); // Output: 4

        int[] nums3 = {1};
        System.out.println(sol.singleNumber(nums3)); // Output: 1
    }
}
