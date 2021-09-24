/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    void solve(TreeNode *root, string num, vector<int> &ans)
    {
        if (!root)
            return;
        num.push_back(root->val + '0');
        if (!root->left && !root->right)
        {
            int number;
            istringstream(num) >> number;
            ans.push_back(number);
            return;
        }
        solve(root->left, num, ans);
        solve(root->right, num, ans);
    }
    int sumNumbers(TreeNode *root)
    {
        vector<int> ans;
        solve(root, "", ans);
        long long sum = 0;
        for (auto &i : ans)
            sum += i;
        return sum;
    }
};
// @lc code=end
