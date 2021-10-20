/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */

// @lc code=start
bool comp(string s1, string s2)
{
    return s1 + s2 > s2 + s1;
}
class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> v;
        for (auto &i : nums)
            v.push_back(to_string(i));
        sort(v.begin(), v.end(), comp);
        string ans;
        for (auto &i : v)
            ans += i;
        return ans[0] == '0' ? "0" : ans;
    }
};
// @lc code=end
