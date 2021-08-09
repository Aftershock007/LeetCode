/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
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
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int n = nums.size(), pivot;
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
            {
                pivot = i;
                break;
            }
        }
        int first = binarySearch(nums, 0, pivot - 1, target);
        int second = binarySearch(nums, pivot, n - 1, target);
        if (first != -1)
            return first;
        else if (second != -1)
            return second;
        else
            return -1;
    }
};
// @lc code=end
