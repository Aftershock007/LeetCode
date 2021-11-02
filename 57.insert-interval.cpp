/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int n = intervals.size(), start = intervals[0][0], end = intervals[0][1];
        vector<vector<int>> ans;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (end >= intervals[i][0])
                end = max(end, intervals[i][1]);
            else
            {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};
// @lc code=end
