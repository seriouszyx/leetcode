/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode* lnode, TreeNode* rnode) {
        if (lnode == NULL && rnode == NULL) return true;
        if (lnode == NULL || rnode == NULL) return false;
        if (lnode->val != rnode->val) return false;
        return isSymmetricHelper(lnode->left, rnode->right) &&
            isSymmetricHelper(lnode->right, rnode->left);
    }
};
// @lc code=end

