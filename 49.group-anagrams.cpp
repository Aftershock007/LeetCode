/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        vector<string> t;
        unordered_map<string, vector<int>> mp;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(i);
        }
        for (auto &i : mp)
        {
            vector<int> vi = i.second;
            t.clear();
            for (auto &j : vi)
                t.push_back(strs[j]);
            ans.push_back(t);
        }
        return ans;
    }
};
// @lc code=end
