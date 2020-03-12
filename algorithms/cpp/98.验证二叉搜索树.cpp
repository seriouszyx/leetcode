/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isBSTHelper(root, LONG_MIN, LONG_MAX);
    }
    bool isBSTHelper(TreeNode* node, long min, long max) {
        if (node == NULL) return true;
        if (node->val <= min || node->val >= max) return false;
        return isBSTHelper(node->left, min, node->val) &&
            isBSTHelper(node->right, node->val, max);
    }
};
// @lc code=end

