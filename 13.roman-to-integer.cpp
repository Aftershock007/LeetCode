/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman;
        roman.insert(make_pair('I', 1));
        roman.insert(make_pair('V', 5));
        roman.insert(make_pair('X', 10));
        roman.insert(make_pair('L', 50));
        roman.insert(make_pair('C', 100));
        roman.insert(make_pair('D', 500));
        roman.insert(make_pair('M', 1000));
        int len = s.length(), res = 0, i = 0;
        while (i < len)
        {
            if (roman[s[i]] >= roman[s[i + 1]])
            {
                res += roman[s[i]];
                i++;
            }
            else
            {
                res += roman[s[i + 1]] - roman[s[i]];
                i += 2;
            }
        }
        return res;
    }
};
// @lc code=end
