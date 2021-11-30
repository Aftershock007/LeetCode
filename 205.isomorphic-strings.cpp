/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution
{
public:
    bool solve(string s, string t)
    {
        unordered_map<char, char> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                if (mp[s[i]] != t[i])
                    return false;
            }
            mp[s[i]] = t[i];
        }
        return true;
    }
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        return solve(s, t) && solve(t, s);
    }
};
// @lc code=end
