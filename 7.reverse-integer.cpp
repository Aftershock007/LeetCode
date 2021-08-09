/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long long int res = 0;
        if (x >= 2147483647 || x <= -2147483648)
            return 0;
        if (x > 0)
        {
            while (x > 0)
            {
                res = res * 10;
                if (res >= 2147483647 || res <= -2147483648)
                    return 0;
                res = res + (x % 10);
                x = x / 10;
            }
        }
        else
        {
            x = -1 * x;
            while (x > 0)
            {
                res = res * 10;
                if (res >= 2147483647 || res <= -2147483648)
                    return 0;
                res = res + (x % 10);
                x = x / 10;
            }
            res = -1 * res;
        }
        return res;
    }
};
// @lc code=end
