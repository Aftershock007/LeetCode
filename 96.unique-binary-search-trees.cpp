/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 */

// @lc code=start
class Solution
{
public:
    int catalan_number(vector<int> &cat, int n)
    {
        if (n == 1 || n == 0)
            return cat[n] = 1;
        if (cat[n] != -1)
            return cat[n];
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += catalan_number(cat, i - 1) * catalan_number(cat, n - i);
        return cat[n] = ans;
    }
    int numTrees(int n)
    {
        vector<int> cat(n + 1, -1);
        return catalan_number(cat, n);
    }
};
// @lc code=end
