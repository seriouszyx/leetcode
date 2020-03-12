/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        return maxDepthHelper(root);
    }

    int maxDepthHelper(TreeNode* node) {
        if (node == NULL) return 0;
        if (node->left == NULL && node->right == NULL) return 1;
        int ldepth = maxDepthHelper(node->left) + 1;
        int rdepth = maxDepthHelper(node->right) + 1;
        return max(ldepth, rdepth);
    }
};
// @lc code=end

