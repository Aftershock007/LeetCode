/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
    int max_sum = INT_MIN;
    int solve(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));
        max_sum = max(max_sum, root->val + left + right);
        return max(left, right) + root->val;
    }
    int maxPathSum(TreeNode *root)
    {
        solve(root);
        return max_sum;
    }
};
// @lc code=end
