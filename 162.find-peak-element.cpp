/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size(), maxi = INT_MIN, idx = max_element(nums.begin(), nums.end()) - nums.begin();
        if (n == 1 || n == 2)
            return idx;
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                if (maxi < nums[i])
                {
                    maxi = nums[i];
                    idx = i;
                }
            }
        }
        return idx;
    }
};
// @lc code=end
