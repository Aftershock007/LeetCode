/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        long long int lo = 1, hi = x, mid, ans;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x)
            {
                lo = mid + 1;
                ans = mid;
            }
            else
                hi = mid - 1;
        }
        return ans;
    }
};
// @lc code=end
