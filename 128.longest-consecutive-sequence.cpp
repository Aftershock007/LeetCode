/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> st;
        for (auto &i : nums)
            st.insert(i);
        int max_len = 0;
        for (auto &i : nums)
        {
            if (!st.count(i - 1))
            {
                int currNum = i;
                int curr_len = 1;
                while (st.count(currNum + 1))
                {
                    currNum++;
                    curr_len++;
                }
                max_len = max(max_len, curr_len);
            }
        }
        return max_len;
    }
};
// @lc code=end
