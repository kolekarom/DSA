import java.util.*;
public class twoSum {
    public int[] twoSum(int[] nums, int target){
        int n = nums.length;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return new int[] {i, j};
                }
            }
        }
        return new int[] {-1, -1};
    }
    public static void main(String[] args) {
        twoSum ts = new twoSum();
        int[] nums = {2,7,11,15};
        int target = 9;
        int[] res = ts.twoSum(nums, target);
        System.out.println(Arrays.toString(res));
    }
}

    
