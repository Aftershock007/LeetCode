/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int n = nums.size(), pivot;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                pivot = i;
                break;
            }
        }
        if (binary_search(nums.begin(), nums.begin() + pivot, target) || binary_search(nums.begin() + pivot, nums.end(), target))
            return true;
        else
            return false;
    }
};
// @lc code=end
