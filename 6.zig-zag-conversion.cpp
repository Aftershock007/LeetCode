/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        long long int n = s.length(), fullCol = numRows - 1, p = 0, col = fullCol, i, j;
        if (numRows == 1)
            return s;
        if (n < numRows)
            numRows = n;
        char arr[numRows][n];
        memset(arr, '#', sizeof(arr));
        for (i = 0; i < n && p < n; i++)
        {
            if (i == 0 || i % fullCol == 0)
            {
                col = fullCol;
                for (j = 0; j < numRows && p < n; j++)
                    arr[j][i] = s[p++];
            }
            else
                arr[--col][i] = s[p++];
        }
        string res;
        for (i = 0; i < numRows; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arr[i][j] != '#')
                    res += arr[i][j];
            }
        }
        return res;
    }
};
// @lc code=end
