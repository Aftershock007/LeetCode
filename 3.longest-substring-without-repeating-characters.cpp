/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int start = 0, count = 0;
        int n = s.length();
        map<char, int> mp;
        for (int end = 0; end < n; end++)
        {
            if (mp.find(s[end]) != mp.end())
                start = max(start, mp[s[end]] + 1);
            mp[s[end]] = end;
            count = max(count, end - start + 1);
        }
        return count;
    }
};
// @lc code=end
