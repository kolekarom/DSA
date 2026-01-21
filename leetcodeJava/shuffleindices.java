
class Solution {
    public String restoreString(String s, int[] indices) {
        int length = s.length();
        StringBuilder sb = new StringBuilder("");
        char ch[] = new char[length];
        for(int i = 0; i < length; i++){
            ch[indices[i]] = s.charAt(i);
        }
        sb.append(ch);
        return sb.toString();
    }
}
public class shuffleindices {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String s = "codeleet";
        int[] indices = {4,5,6,7,0,2,1,3};
        String restoredString = solution.restoreString(s, indices);
        System.out.println(restoredString); // Output: "leetcode"
    }
}