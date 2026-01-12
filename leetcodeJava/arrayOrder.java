import java.util.*;
class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        List<Integer> result = new ArrayList<>();
        for(int i = 0; i < nums.length; i++){
            result.add(index[i], nums[i]);
        }
        int[] target = new int[result.size()];
        for(int i = 0; i < result.size(); i++){
            target[i] = result.get(i);
        }
        return target;
    }
}
public class arrayOrder {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {0,1,2,3,4};
        int[] index = {0,1,2,2,1};
        int[] target = solution.createTargetArray(nums, index);
        System.out.println(Arrays.toString(target)); // Output: [0, 4, 1, 3, 2]
    }
}