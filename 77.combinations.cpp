/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> ans;
    void solve(int ind, int k, int n, vector<int> &curr)
    {
        if (curr.size() == k)
        {
            ans.push_back(curr);
            return;
        }
        for (int i = ind; i < n + 1; i++)
        {
            curr.push_back(i);
            solve(i + 1, k, n, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> curr;
        solve(1, k, n, curr);
        return ans;
    }
};
// @lc code=end
