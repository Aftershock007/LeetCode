/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0, candidate = 0;
        for (auto &num : nums)
        {
            if (count == 0)
                candidate = num;
            if (candidate == num)
                count++;
            else
                count--;
        }
        return candidate;
    }
};
// @lc code=end
