/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution
{
public:
    string convertToTitle(int n)
    {
        string s;
        while (n > 0)
        {
            int tail = n % 26;
            if (tail == 0)
            {
                tail = 26;
                s = 'Z' + s;
            }
            else
            {
                char c = 'A' + tail - 1;
                s = c + s;
            }
            n -= tail;
            n /= 26;
        }
        return s;
    }
};
// @lc code=end
