import java.util.*;
class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int[] arr : image) reverse(arr);
        return image;
    }
    public void reverse(int[] arr){
        int l = 0, r = arr.length-1;
        while(l <= r){ // <= to handle the middle element in odd-length arrays
            int temp = arr[l]; // store left value
            arr[l++] = arr[r] ^ 1; // assign inverted right value to left and increment left pointer
            arr[r--] = temp ^ 1; // assign inverted stored left value to right and decrement right pointer
        }
    }
}
public class flipImage {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[][] image = {
            {1,1,0},
            {1,0,1},
            {0,0,0}
        };
        int[][] flippedImage = solution.flipAndInvertImage(image);
        for (int[] row : flippedImage) {
            System.out.println(Arrays.toString(row));
        }
        // Output:
        // [1, 0, 0]
        // [0, 1, 0]
        // [1, 1, 1]
    }
}