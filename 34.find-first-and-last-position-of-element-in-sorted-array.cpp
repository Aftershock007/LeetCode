/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> v;
        int n = nums.size();
        int temp = binarySearch(nums, 0, n - 1, target);
        if (temp == -1)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        else
        {
            int i = temp;
            while (i >= 0 && nums[i] == target)
                i--;
            v.push_back(i + 1);
            i = temp;
            while (i < n && nums[i] == target)
                i++;
            v.push_back(i - 1);
        }
        return v;
    }
};
// @lc code=end
