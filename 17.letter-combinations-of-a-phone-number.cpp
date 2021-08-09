/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution
{
public:
    void myLetterCombination(string digits, vector<string> &res, string nums[], int i, string s)
    {
        if (i == digits.length())
        {
            res.push_back(s);
            return;
        }
        string val = nums[digits[i] - '0'];
        for (int j = 0; j < val.length(); j++)
            myLetterCombination(digits, res, nums, i + 1, s + val[j]);
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        if (digits.length() == 0)
            return res;
        string nums[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        myLetterCombination(digits, res, nums, 0, "");
        return res;
    }
};
// @lc code=end
