/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution
{
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (ind == arr.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }
        if (arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ds, ans);
            ds.pop_back();
        }
        findCombination(ind + 1, target, arr, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ds, ans);
        return ans;
    }
};
// @lc code=end
