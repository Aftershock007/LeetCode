/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ones = 0;
        int twos = 0;
        for (int i : nums)
        {
            ones = (ones ^ i) & (~twos);
            twos = (twos ^ i) & (~ones);
        }
        return ones;
    }
};
// @lc code=end
