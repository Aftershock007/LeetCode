/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size(), col0 = 1;
        // row=m, col=n
        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == 0)
                col0 = 0;
            for (int j = 1; j < n; j++)
                if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }
        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 1; j--)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if (col0 == 0)
                matrix[i][0] = 0;
        }
    }
};
// @lc code=end
