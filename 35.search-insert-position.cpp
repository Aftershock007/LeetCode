/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int binarySearch(vector<int> &nums, int l, int r, int x)
    {
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] == x)
                return m;
            if (nums[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
        return l;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        if (nums[0] > target)
            return 0;
        if (nums[n - 1] < target)
            return n;
        return binarySearch(nums, 0, n - 1, target);
    }
};
// @lc code=end
