class Solution {
    public int myAtoi(String s) {
        if(s == null || s.length() == 0){
            return 0;
        }

        final int INT_MAX = Integer.MAX_VALUE; // 
        final int INT_MIN = Integer.MIN_VALUE;


        int i = 0;
        int n = s.length();
        // skip leading whitespaces
        while(i < n && s.charAt(i) == ' '){
            i++;
        }
         // check if you have reached the end 
        if(i == n){
            return 0;
        }
        // check the sign 
        int sign = 1;
        if(s.charAt(i) == '+'){
            i++;
        }else if(s.charAt(i) == '-'){
            sign = -1;
            i++;
        }

        //read digits 
        long res = 0;
        while (i < n && Character.isDigit(s.charAt(i))) {
            int digit = s.charAt(i) - '0';
            res = res * 10 + digit;
            
            if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        } 

        return (int)(res * sign);

    }
}
public class stringToInt {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.myAtoi("42")); // 42
        System.out.println(solution.myAtoi("   -42")); // -42
        System.out.println(solution.myAtoi("4193 with words")); // 4193
        System.out.println(solution.myAtoi("words and 987")); // 0
        System.out.println(solution.myAtoi("-91283472332")); // -2147483648 (clamped to INT_MIN)
    }

}
