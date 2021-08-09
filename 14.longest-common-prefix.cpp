/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int count = 0, mini = INT_MAX;
        string str;
        for (int i = 0; i < strs.size(); i++)
        {
            int len = strs[i].length();
            if (len < mini)
            {
                mini = len;
                str = strs[i];
            }
        }
        for (int i = 0; i < mini; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (str[i] != strs[j][i])
                    return str.substr(0, count);
            }
            count++;
        }
        return str.substr(0, count);
    }
};
// @lc code=end
