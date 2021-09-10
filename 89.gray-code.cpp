/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution
{
public:
    vector<int> grayCode(int n)
    {
        vector<int> v;
        int p = pow(2, n);
        for (int i = 0; i < p; i++)
            v.push_back(i ^ (i / 2));
        return v;
    }
};
// @lc code=end
