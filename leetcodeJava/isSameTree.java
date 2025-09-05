class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}
    TreeNode(int val) { 
        this.val = val; 
    }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null || q == null) {
            return p == q;  // both must be null to be same
        }

        // recursive check
        boolean isLeftSame = isSameTree(p.left, q.left);
        boolean isRightSame = isSameTree(p.right, q.right);

        return (p.val == q.val) && isLeftSame && isRightSame;
    }
}

public class isSameTree {
    public static void main(String[] args) {
        // Example: Tree 1
        TreeNode tree1 = new TreeNode(1,
                            new TreeNode(2),
                            new TreeNode(3));

        // Example: Tree 2 (identical to Tree 1)
        TreeNode tree2 = new TreeNode(1,
                            new TreeNode(2),
                            new TreeNode(3));

        // Example: Tree 3 (different)
        TreeNode tree3 = new TreeNode(1,
                            new TreeNode(2),
                            new TreeNode(4));

        Solution sol = new Solution();

        System.out.println("Tree1 vs Tree2: " + sol.isSameTree(tree1, tree2)); // true
        System.out.println("Tree1 vs Tree3: " + sol.isSameTree(tree1, tree3)); // false
    }
}
