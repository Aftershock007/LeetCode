/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
                int num;
                stringstream(tokens[i]) >> num;
                st.push(num);
            }
            else
            {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                if (tokens[i] == "+")
                {
                    int val = first + second;
                    st.push(val);
                }
                else if (tokens[i] == "-")
                {
                    int val = first - second;
                    st.push(val);
                }
                else if (tokens[i] == "*")
                {
                    int val = first * second;
                    st.push(val);
                }
                else
                {
                    int val = first / second;
                    st.push(val);
                }
            }
        }
        return st.top();
    }
};
// @lc code=end
