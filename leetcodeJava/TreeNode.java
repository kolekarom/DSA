import java.util.*;
public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
     TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
         this.left = left;
        this.right = right;
    }
 }

 
class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null){
            return false;
        }
        if(root.left == null && root.right == null){
            return targetSum == root.val;
        }
        boolean leftSum = hasPathSum(root.left,targetSum - root.val);
        boolean rightSum = hasPathSum(root.right,targetSum - root.val);

        return leftSum || rightSum;
    }
}
public class pathSum {
    public static void main(String[] args) {
        Solution sol = new Solution();
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(4);
        root.right = new TreeNode(8);
        root.left.left = new TreeNode(11);
        root.left.left.left = new TreeNode(7);
        root.left.left.right = new TreeNode(2);
        root.right.left = new TreeNode(13);
        root.right.right = new TreeNode(4);
        root.right.right.right = new TreeNode(1);

        int targetSum = 22;
        boolean result = sol.hasPathSum(root, targetSum);
        System.out.println(result); // Output: true
    }
}