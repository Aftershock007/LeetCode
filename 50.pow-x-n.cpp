/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long nn = n;
        if (n < 0)
            nn = -1 * nn;
        while (nn)
        {
            if (nn & 1)
                ans *= x;
            x *= x;
            nn >>= 1;
        }
        if (n < 0)
            ans = 1.0 / ans;
        return ans;
    }
};
// @lc code=end