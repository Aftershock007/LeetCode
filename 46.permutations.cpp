/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution
{
public:
    void solve(string s, int l, int r, vector<vector<int>> &ans)
    {
        if (l == r)
        {
            vector<int> ds;
            for (auto &i : s)
                ds.push_back(i - '0');
            ans.push_back(ds);
        }
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            solve(s, l + 1, r, ans);
            swap(s[l], s[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        string s;
        for (auto &i : nums)
            s.push_back(i + '0');
        solve(s, 0, s.size() - 1, ans);
        return ans;
    }
};
// @lc code=end
