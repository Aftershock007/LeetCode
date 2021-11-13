/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution
{
public:
    // TODO: Method-1 O(N^2) & O(1)
    // int left_max(vector<int> &height, int i)
    // {
    //     int maxi = *max_element(height.begin(), height.begin() + i);
    //     return maxi;
    // }
    // int right_max(vector<int> &height, int i)
    // {
    //     int maxi = *max_element(height.begin() + i, height.end());
    //     return maxi;
    // }
    // int trap(vector<int> &height)
    // {
    //     int ans, sum = 0;
    //     for (int i = 1; i < height.size(); i++)
    //     {
    //         ans = min(left_max(height, i), right_max(height, i)) - height[i];
    //         if (ans > 0)
    //             sum += ans;
    //     }
    //     return sum;
    // }
    // TODO: Method-2 O(N) & O(2N)
    // int trap(vector<int> &height)
    // {
    //     int n = height.size(), ans, sum = 0;
    //     vector<int> prefix(n);
    //     vector<int> suffix(n);
    //     prefix[0] = height[0];
    //     int maxi = height[0];
    //     for (int i = 1; i < n; i++)
    //     {
    //         maxi = max(maxi, height[i]);
    //         prefix[i] = maxi;
    //     }
    //     suffix[n - 1] = height[n - 1];
    //     maxi = height[n - 1];
    //     for (int i = n - 2; i >= 0; i--)
    //     {
    //         maxi = max(maxi, height[i]);
    //         suffix[i] = maxi;
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         ans = min(prefix[i], suffix[i]) - height[i];
    //         if (ans > 0)
    //             sum += ans;
    //     }
    //     return sum;
    // }
    // TODO: Method-3 O(N) & O(1)
    int trap(vector<int> &height)
    {
        int n = height.size(), l = 0, r = n - 1;
        int left_max = 0, right_max = 0, res = 0;
        while (l <= r)
        {
            if (height[l] <= height[r])
            {
                if (left_max <= height[l])
                    left_max = height[l];
                else
                    res += left_max - height[l];
                l++;
            }
            else
            {
                if (right_max <= height[r])
                    right_max = height[r];
                else
                    res += right_max - height[r];
                r--;
            }
        }
        return res;
    }
};
// @lc code=end
