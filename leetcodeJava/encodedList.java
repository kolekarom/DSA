import java.util.*;

class Solution {
    public int[] decompressRLElist(int[] nums) {

        List<Integer> result = new ArrayList<>();

        for (int i = 0; i < nums.length; i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];

            for (int j = 0; j < freq; j++) {
                result.add(val);
            }
        }

        int[] output = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            output[i] = result.get(i);
        }

        return output;
    }
}
public class encodedList {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {1, 2, 3, 4};
        int[] decompressed = solution.decompressRLElist(nums);
        System.out.println(Arrays.toString(decompressed)); // Output: [2, 4, 4, 4]
    }
}