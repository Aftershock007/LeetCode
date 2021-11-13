/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution
{
public:
    int solve(int n)
    {
        int ans = 0;
        while (n)
        {
            int t = n % 10;
            ans += t * t;
            n = n / 10;
        }
        return ans;
    }
    bool isHappy(int n)
    {
        int slow = n, fast = n;
        do
        {
            slow = solve(slow);
            fast = solve(solve(fast));
            if (slow == 1)
                return 1;
        } while (slow != fast);
        return 0;
    }
};
// @lc code=end
