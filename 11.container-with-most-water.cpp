/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &v)
    {
        int n = v.size(), l = 0, r = n - 1;
        int sum = 0;
        while (l < r)
        {
            int lh = v[l];
            int rh = v[r];
            int min_h = min(lh, rh);
            sum = max(sum, (r - l) * min_h);
            if (lh < rh)
                l++;
            else
                r--;
        }
        return sum;
    }
};
// @lc code=end
