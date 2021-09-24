/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans;
        long long val = 1;
        for (int i = 0; i <= rowIndex; i++)
        {
            ans.push_back(val);
            val = val * (rowIndex - i) / (i + 1);
        }
        return ans;
    }
};
// @lc code=end
