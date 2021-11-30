/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution
{
public:
    // TODO: Top-Down DP
    // int solve(vector<int> &nums, vector<int> &dp, int n)
    // {
    //     if (n < 0)
    //         return 0;
    //     if (dp[n] != -1)
    //         return dp[n];
    //     return dp[n] = max(nums[n] + solve(nums, dp, n - 2), solve(nums, dp, n - 1));
    // }
    // TODO: Bottom-Up DP
    // int solve(vector<int> &nums, int n)
    // {
    //     if (nums.size() == 0)
    //         return 0;
    //     vector<int> dp(nums.size() + 1);
    //     dp[0] = 0;
    //     dp[1] = nums[0];
    //     for (int i = 1; i < nums.size(); i++)
    //     {
    //         int val = nums[i];
    //         dp[i + 1] = max(val + dp[i - 1], dp[i]);
    //     }
    //     return dp[nums.size()];
    // }
    // TODO: Without DP
    int solve(vector<int> &nums, int n)
    {
        if (n == 0)
            return 0;
        int prev1 = 0, prev2 = 0;
        for (auto &it : nums)
        {
            int temp = prev1;
            prev1 = max(prev1, it + prev2);
            prev2 = temp;
        }
        return prev1;
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(nums, n - 1);
    }
};
// @lc code=end
