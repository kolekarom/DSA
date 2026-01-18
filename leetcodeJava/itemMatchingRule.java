import java.util.*;
class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int count = 0;
        int index = ruleKey.equals("type") ? 0 :
            ruleKey.equals("color") ? 1 : 2;

for (List<String> item : items) {
    if (item.get(index).equals(ruleValue)) {
        count++;
    }
}
return count;
    }
}
public class itemMatchingRule {
    public static void main(String[] args) {
        Solution solution = new Solution();
        List<List<String>> items = new ArrayList<>();
        items.add(Arrays.asList("phone", "blue", "pixel"));
        items.add(Arrays.asList("computer", "silver", "lenovo"));
        items.add(Arrays.asList("phone", "gold", "iphone"));
        String ruleKey = "color";
        String ruleValue = "silver";
        int result = solution.countMatches(items, ruleKey, ruleValue);
        System.out.println(result); // Output: 1
    }
}