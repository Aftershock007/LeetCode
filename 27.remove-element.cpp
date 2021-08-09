/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int>::iterator it = nums.begin();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums.erase(it);
                it--;
                i--;
            }
            it++;
        }
        return nums.size();
    }
};
// @lc code=end
