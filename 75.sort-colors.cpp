/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size(), low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            switch (nums[mid])
            {
            case 0:
                swap(nums[low++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[high--], nums[mid]);
                break;
            }
        }
    }
};
// @lc code=end
