/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = 0, j = 0, n = nums.size();
        int sum = 0, mini = INT_MAX;
        while (j < n)
        {
            sum += nums[j];
            while (sum >= target)
            {
                mini = min(mini, j - i + 1);
                sum -= nums[i++];
            }
            j++;
        }
        return mini == INT_MAX ? 0 : mini;
    }
};
// @lc code=end
