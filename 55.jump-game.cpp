/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxReach = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (maxReach < i)
                return false;
            if (i + nums[i] > maxReach)
                maxReach = i + nums[i];
        }
        return true;
    }
};
// @lc code=end
