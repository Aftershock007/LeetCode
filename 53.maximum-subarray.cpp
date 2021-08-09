/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, maxSum = INT_MIN;
        for (auto &i : nums)
        {
            sum += i;
            maxSum = max(maxSum, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxSum;
    }
};
// @lc code=end
