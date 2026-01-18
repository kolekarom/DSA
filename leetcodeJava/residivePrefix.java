import java.util.HashSet;
import java.util.Set;
class Solution {
    public int residuePrefixes(String s) {
        Set<Character> set = new HashSet<>();
        int count = 0;
        for(int i = 0;i < s.length(); i++){
            set.add(s.charAt(i));
            int length = i + 1;
            int distinct = set.size();
            if(distinct == length % 3){
                count++;
            }
        }
        return count++;
    }
}
public class residivePrefix {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String s = "abcabc";
        int result = solution.residuePrefixes(s);
        System.out.println(result); // Output the number of residue prefixes
    }
}
