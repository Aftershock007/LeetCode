/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *first = nullptr, *second = nullptr, *prev = nullptr;
    void fixBST(TreeNode *root)
    {
        if (!root)
            return;
        fixBST(root->left);
        if (prev && prev->val > root->val)
        {
            if (!first)
                first = prev;
            second = root;
        }
        prev = root;
        fixBST(root->right);
    }
    void recoverTree(TreeNode *root)
    {
        fixBST(root);
        swap(first->val, second->val);
    }
};
// @lc code=end
