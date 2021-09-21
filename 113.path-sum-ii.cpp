/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
    vector<vector<int>> ans;
    void solve(TreeNode *root, int sum, vector<int> &v)
    {
        if (!root)
            return;
        sum -= root->val;
        v.push_back(root->val);
        if (sum == 0 && !root->left && !root->right)
            ans.push_back(v);
        solve(root->left, sum, v);
        solve(root->right, sum, v);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        vector<int> v;
        solve(root, sum, v);
        return ans;
    }
};
// @lc code=end
