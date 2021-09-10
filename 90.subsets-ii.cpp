/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> m;
    set<vector<int>> s;
    void solve(vector<int> ip, vector<int> op)
    {
        if (ip.size() == 0)
        {
            if (s.find(op) == s.end())
            {
                s.insert(op);
                m.push_back(op);
            }
            return;
        }
        vector<int> op1 = op, op2 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
        solve(ip, op2);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> op;
        sort(nums.begin(), nums.end());
        solve(nums, op);
        return m;
    }
};
// @lc code=end
