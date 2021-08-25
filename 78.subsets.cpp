/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> ans;
    void solve(string ip, string op)
    {
        if (ip.length() == 0)
        {
            vector<int> x;
            for (auto &i : op)
                x.push_back(i);
            ans.push_back(x);
            x.clear();
            return;
        }
        string op1 = op, op2 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
        solve(ip, op2);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        string ip = "", op = "";
        for (auto &i : nums)
            ip.push_back(i);
        solve(ip, op);
        return ans;
    }
};
// @lc code=end
