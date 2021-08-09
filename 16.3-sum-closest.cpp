/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int mini = INT_MAX, n = nums.size(), res;
        for (int i = 0; i < n - 2; i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {
                int l = i + 1, r = n - 1;
                while (l < r)
                {
                    int sum = nums[l] + nums[r] + nums[i];
                    if (sum == target)
                        return sum;
                    else if (sum < target)
                        l++;
                    else
                        r--;
                    if (abs(sum - target) < mini)
                    {
                        res = sum;
                        mini = abs(sum - target);
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end
