/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (nums[mid] >= nums[end])
                start = mid + 1;
            else
                end = mid;
        }
        return nums[mid];
    }
};
// @lc code=end
