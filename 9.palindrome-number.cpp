/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x > INT_MAX)
            return false;
        unsigned long long int t1 = x, t2 = 0;
        while (x)
        {
            t2 *= 10;
            t2 += x % 10;
            x /= 10;
        }
        if (t1 == t2)
            return true;
        else
            return false;
    }
};
// @lc code=end
