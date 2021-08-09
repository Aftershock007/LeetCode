/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution
{
public:
    void solve(string op, int open, int close, vector<string> &v)
    {
        if (open == 0 && close == 0)
        {
            v.push_back(op);
            return;
        }
        if (open != 0)
        {
            string op1 = op;
            op1.push_back('(');
            solve(op1, open - 1, close, v);
        }
        if (open < close)
        {
            string op2 = op;
            op2.push_back(')');
            solve(op2, open, close - 1, v);
        }
    }
    vector<string> generateParenthesis(int n)
    {
        vector<string> v;
        int open = n, close = n;
        string op = "";
        solve(op, open, close, v);
        return v;
    }
};
// @lc code=end
