import java.util.*;
class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        List<List<Integer>> res = new ArrayList<>();
        Map<Integer, List<Integer>> groups = new HashMap<>();

        for(int i = 0; i < groupSizes.length; i++){
            int size = groupSizes[i];
            groups.putIfAbsent(size, new ArrayList<>());
            groups.get(size).add(i);

            if(groups.get(size).size() == size){
                res.add(groups.get(size));
                groups.remove(size);
            }
        }
        return res;
    }
}
public class Leet1282 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] groupSizes = {3, 3, 3, 3, 3, 1, 3};
        List<List<Integer>> result = solution.groupThePeople(groupSizes);
        System.out.println("Grouped people: " + result);
    }
}