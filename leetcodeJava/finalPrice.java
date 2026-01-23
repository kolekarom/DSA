import java.util.*;
class Solution {
    public int[] finalPrices(int[] prices) {
        int n = prices.length;
        Stack <Integer> st = new Stack();
        for(int i = n -1; i >= 0; i--){
            while(!st.isEmpty() && st.peek()>prices[i]){
                st.pop();
            }
            int discount = st.isEmpty() ? 0 : st.peek();

            st.push(prices[i]);

            prices[i]  -= discount;
        }
        return prices;
    }
}
public class finalPrice {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] prices = {8,4,6,2,3};
        int[] result = sol.finalPrices(prices);
        System.out.println(Arrays.toString(result)); // Output: [4,2,4,2,3]
    }
    
}

// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
// TC: O(N)
// SC: O(N)
// Approach: Using stack to keep track of next smaller or equal element to the right