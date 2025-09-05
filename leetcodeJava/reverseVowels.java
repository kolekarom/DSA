public class reverseVowels {
    class Solution {
        public String reverseVovels(String s) {
            StringBuilder sb = new StringBuilder(s);
    
            int left = 0, right = sb.length() - 1;
    
            String vovels = "AEIOUaeiou";
    
            while(left < right){
    
                while(left < right && vovels.indexOf(sb.charAt(left)) == -1){
                    left++;
                }
    
                while(left < right && vovels.indexOf(sb.charAt(right)) == -1){
                    right--;
                }
    
                char temp = sb.charAt(left);
                sb.setCharAt(left,sb.charAt(right));
                sb.setCharAt(right, temp);
    
                left++;
                right--;
            }
            return sb.toString();
        }
    }
    public static void main(String[] args) {
        String input = "hello";
        Solution sol = new reverseVovels().new Solution();
        String output = sol.reverseVovels(input);
        System.out.println(output);

    }
}
