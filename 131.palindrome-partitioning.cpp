/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void solve(string ip, int index, vector<vector<string>> &ans, vector<string> path)
    {
        if (index == ip.size())
        {
            ans.push_back(path);
            return;
        }
        for (int i = index; i < ip.size(); i++)
        {
            if (isPalindrome(ip, index, i))
            {
                path.push_back(ip.substr(index, i - index + 1));
                solve(ip, i + 1, ans, path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s, 0, ans, path);
        return ans;
    }
};
// @lc code=end
