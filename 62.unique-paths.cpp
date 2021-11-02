/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution
{
public:
    // TODO: DP Solution
    // int solve(int i, int j, int m, int n, vector<vector<int>> &dp)
    // {
    //     if (i >= m || j >= n)
    //         return 0;
    //     if (i == m - 1 || j == n - 1)
    //         return 1;
    //     if (dp[i][j] != -1)
    //         return dp[i][j];
    //     return dp[i][j] = solve(i, j + 1, m, n, dp) + solve(i + 1, j, m, n, dp);
    // }
    int uniquePaths(int m, int n)
    {
        // TODO: m == row n == col
        // vector<vector<int>> dp(m, vector<int>(n, -1));
        // return solve(0, 0, m, n, dp);
        int N = m + n - 2, R = m - 1;
        double res = 1;
        for (int i = 1; i <= R; i++)
            res = res * (N - R + i) / i;
        return (int)res;
    }
};
// @lc code=end
