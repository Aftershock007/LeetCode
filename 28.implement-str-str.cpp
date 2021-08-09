/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.length() == 0)
            return 0;
        int flag;
        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack[i] == needle[0])
            {
                flag = 0;
                for (int j = 0; j < needle.length(); j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    return i;
            }
        }
        return -1;
    }
};
// @lc code=end
