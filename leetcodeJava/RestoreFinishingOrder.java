import java.util.*;

class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        Set<Integer> friendSet = new HashSet<>();
        for(int f : friends){
            friendSet.add(f);
        }
        List<Integer> result = new ArrayList<>();
        for(int o : order){
            if(friendSet.contains(o)){
                result.add(o);
            }
        }
        int[] arr = new int[result.size()];
        for(int i = 0; i < result.size(); i++){
            arr[i] = result.get(i);
        }
        return arr;
    }
}
public class RestoreFinishingOrder {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] order = {4, 2, 3, 1, 5};
        int[] friends = {2, 3, 5};
        int[] result = solution.recoverOrder(order, friends);
        System.out.println("Recovered finishing order: " + Arrays.toString(result));
    }
}