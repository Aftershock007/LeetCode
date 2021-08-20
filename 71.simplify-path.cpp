/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution
{
public:
    string simplifyPath(string path)
    {
        vector<string> v;
        istringstream ss(path);
        string token, res = "";
        while (getline(ss, token, '/'))
        {
            if (token == "" || token == ".")
                continue;
            else if (token == "..")
            {
                if (!v.empty())
                    v.pop_back();
            }
            else
                v.push_back(token);
        }
        for (auto &i : v)
            res += "/" + i;
        return v.empty() ? "/" : res;
    }
};
// @lc code=end
