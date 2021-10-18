/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution
{
public:
    int titleToNumber(string s)
    {
        int ans = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
            ans += ((int)s[i] - 64) * pow(26, i);
        return ans;
    }
};
// @lc code=end
