/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string ss;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
                ss.push_back(s[i] + 32);
            else if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
                ss.push_back(s[i]);
        }
        for (int i = 0; i < ss.size() / 2; i++)
        {
            if (ss[i] != ss[ss.size() - 1 - i])
                return false;
        }
        return true;
    }
};
// @lc code=end
