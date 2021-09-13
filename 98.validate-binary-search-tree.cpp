/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool fun(TreeNode *root, long max, long min)
    {
        if (!root)
            return true;
        if (root->val > min && root->val < max)
            return fun(root->left, root->val, min) && fun(root->right, max, root->val);
        return false;
    }
    bool isValidBST(TreeNode *root)
    {
        return fun(root, LONG_MAX, LONG_MIN);
    }
};
// @lc code=end
