/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
class Solution
{
public:
    // TODO: Top-Down DP O(n^3)
    // bool setContains(unordered_set<string> &wordDict, string word)
    // {
    //     if (wordDict.find(word) != wordDict.end())
    //         return true;
    //     return false;
    // }
    // bool solve(string s, unordered_set<string> &wordDict, vector<int> &dp, int pos)
    // {
    //     int n = s.size();
    //     if (pos == n)
    //         return true;
    //     if (dp[pos] != -1)
    //         return dp[pos];
    //     for (int i = pos; i < n; i++)
    //     {
    //         // OPTIMIZE: substr() takes O(n) time extra
    //         string word = s.substr(pos, i - pos + 1);
    //         if (setContains(wordDict, word) && solve(s, wordDict, dp, i + 1))
    //             return dp[pos] = 1;
    //     }
    //     return dp[pos] = 0;
    // }
    // TODO: Top-Down Optimized DP O(n^2)
    bool solve(string s, unordered_set<string> &wordDict, vector<int> &dp, int pos)
    {
        int n = s.size();
        if (pos == n)
            return true;
        if (dp[pos] != -1)
            return dp[pos];
        string word;
        for (int i = pos; i < n; i++)
        {
            // OPTIMIZE: It takes O(1)
            word += s[i];
            if (wordDict.count(word) && solve(s, wordDict, dp, i + 1))
                return dp[pos] = 1;
        }
        return dp[pos] = 0;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int n = s.size();
        vector<int> dp(n, -1);
        unordered_set<string> wordDict(wordDict.begin(), wordDict.end());
        return solve(s, wordDict, dp, 0);
    }
};
// @lc code=end
