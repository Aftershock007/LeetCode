/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    int postInd;
    unordered_map<int, int> mp;
    TreeNode *BuildTree(vector<int> &inorder, vector<int> &postorder, int start, int end)
    {
        if (start > end)
            return nullptr;
        TreeNode *root = new TreeNode(postorder[postInd--]);
        int fit = mp[root->val];
        root->right = BuildTree(inorder, postorder, fit + 1, end);
        root->left = BuildTree(inorder, postorder, start, fit - 1);
        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int n = inorder.size();
        postInd = n - 1;
        for (int i = 0; i < n; i++)
            mp[inorder[i]] = i;
        return BuildTree(inorder, postorder, 0, n - 1);
    }
};
// @lc code=end
