/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size(), p = 0;
        if (n == 0 || n == 1)
            return n;
        for (int i = 0; i < n - 1; i++)
            if (nums[i] != nums[i + 1])
                nums[p++] = nums[i];
        nums[p++] = nums[n - 1];
        return p;
    }
};
// @lc code=end
