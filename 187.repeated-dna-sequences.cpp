/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        set<string> seen, repeat;
        vector<string> ans;
        if (s.size() < 10)
            return ans;
        for (int i = 0; i <= s.size() - 10; i++)
        {
            string subStr = s.substr(i, 10);
            if (seen.find(subStr) != seen.end())
                repeat.insert(subStr);
            seen.insert(subStr);
        }
        for (auto &i : repeat)
            ans.push_back(i);
        return ans;
    }
};
// @lc code=end
