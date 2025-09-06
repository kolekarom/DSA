class TreeNode {
    int val; //node value
    TreeNode left; //left child
    TreeNode right;

    TreeNode() {}  //default constructor for null node
    TreeNode(int val) {  // constructor with value
        this.val = val;  // set node value
    }
    TreeNode(int val, TreeNode left, TreeNode right) { // constructor with value and children
        this.val = val; // set node value
        this.left = left; // set left child
        this.right = right;
    }
}

class Solution { // solution class
    public boolean isSameTree(TreeNode p, TreeNode q) { // method to check if two trees are the same
        if (p == null || q == null) {
            return p == q;  // both must be null to be same
        }

        // recursive check
        boolean isLeftSame = isSameTree(p.left, q.left); // check left subtrees
        boolean isRightSame = isSameTree(p.right, q.right); // check right subtrees

        return (p.val == q.val) && isLeftSame && isRightSame; // check current node and both subtrees
    }
}

public class isSameTree { // main class
    public static void main(String[] args) { // main method
        // Example: Tree 1
        TreeNode tree1 = new TreeNode(1, 
                            new TreeNode(2),
                            new TreeNode(3)); // root node with value 1, left child 2, right child 3

        // Example: Tree 2 (identical to Tree 1)
        TreeNode tree2 = new TreeNode(1, 
                            new TreeNode(2),
                            new TreeNode(3)); // second tree identical to first

        // Example: Tree 3 (different)
        TreeNode tree3 = new TreeNode(1,
                            new TreeNode(2),
                            new TreeNode(4));

        Solution sol = new Solution();

        System.out.println("Tree1 vs Tree2: " + sol.isSameTree(tree1, tree2)); // true
        System.out.println("Tree1 vs Tree3: " + sol.isSameTree(tree1, tree3)); // false
    }
}
