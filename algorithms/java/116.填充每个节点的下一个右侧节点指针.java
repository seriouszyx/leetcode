/*
 * @lc app=leetcode.cn id=116 lang=java
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public Node connect(Node root) {
        if (root == null) return root;
        connectTwoNode(root.left, root.right);
        return root;
    }
    private void connectTwoNode(Node a, Node b) {
        if (a == null || b == null) return;
        a.next = b;
        connectTwoNode(a.left, a.right);
        connectTwoNode(b.left, b.right);
        connectTwoNode(a.right, b.left);
    }
}
// @lc code=end

