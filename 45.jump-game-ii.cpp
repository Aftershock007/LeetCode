/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int jump = 0, maxReach = 0, currReach = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i + nums[i] > maxReach)
                maxReach = i + nums[i];
            if (i == currReach)
            {
                jump++;
                currReach = maxReach;
            }
        }
        return jump;
    }
};
// @lc code=end
