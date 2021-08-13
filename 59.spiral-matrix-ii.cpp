/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> matrix(n, vector<int>(n));
        int dir = 0, top = 0, down = n - 1, left = 0, right = n - 1, k = 1;
        while (top <= down && left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                    matrix[top][i] = k++;
                top++;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                    matrix[i][right] = k++;
                right--;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                    matrix[down][i] = k++;
                down--;
            }
            else if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                    matrix[i][left] = k++;
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return matrix;
    }
};
// @lc code=end
