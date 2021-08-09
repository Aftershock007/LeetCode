/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;
        if (nums.size() == 0)
            return res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int target_new = target - nums[i] - nums[j];
                int l = j + 1, r = n - 1;
                while (l < r)
                {
                    int two_sum = nums[l] + nums[r];
                    if (two_sum < target_new)
                        l++;
                    else if (two_sum > target_new)
                        r--;
                    else
                    {
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[r]);
                        res.push_back(v);
                        while (l < r && nums[l] == v[2])
                            l++;
                        while (l < r && nums[r] == v[3])
                            r--;
                    }
                }
                while (j + 1 < n && nums[j + 1] == nums[j])
                    j++;
            }
            while (i + 1 < n && nums[i + 1] == nums[i])
                i++;
        }
        return res;
    }
};
// @lc code=end
