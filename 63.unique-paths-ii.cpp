/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution
{
public:
    int solve(vector<vector<int>> &obstacleGrid, int row, int col, int i, int j, vector<vector<int>> &dp)
    {
        if (i > row - 1 || j > col - 1)
            return 0;
        if (obstacleGrid[i][j] == 1)
            dp[i][j] = 0;
        if (i == row - 1 && j == col - 1 && obstacleGrid[i][j] == 0)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] = solve(obstacleGrid, row, col, i, j + 1, dp) + solve(obstacleGrid, row, col, i + 1, j, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        vector<vector<int>> dp(row, vector<int>(col, -1));
        return solve(obstacleGrid, row, col, 0, 0, dp);
    }
};
// @lc code=end
