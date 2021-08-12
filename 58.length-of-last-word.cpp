/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length(), start, count = 0, maxLen;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] >= 65)
            {
                start = i;
                break;
            }
        }
        for (int i = start; i >= 0; i--)
        {
            if (s[i] >= 65)
                count++;
            else
                break;
        }
        return count;
    }
};
// @lc code=end
