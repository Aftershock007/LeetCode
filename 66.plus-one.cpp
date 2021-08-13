/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        if (digits[n - 1] != 9)
        {
            digits[n - 1]++;
            return digits;
        }
        else
        {
            string s = "";
            for (auto &i : digits)
                s.push_back(i + '0');
            int carry = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int p;
                if (i == n - 1)
                    p = s[i] - '0' + 1 + carry;
                else
                    p = s[i] - '0' + carry;
                carry = p / 10;
                s[i] = p % 10 + '0';
            }
            vector<int> ans;
            if (carry == 1)
                ans.push_back(1);
            for (int i = 0; i < s.size(); i++)
                ans.push_back(s[i] - '0');
            return ans;
        }
    }
};
// @lc code=end
