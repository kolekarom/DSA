class Solution {
    public int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        int prev1 = 2, prev2 = 1;
        for(int i = 3; i <= n; i++){
            int curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
}
public class ClimbingStairs {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 5; // Example input
        int result = solution.climbStairs(n);
        System.out.println("Number of ways to climb " + n + " stairs: " + result);
    }
    
}
