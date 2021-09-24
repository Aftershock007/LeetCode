/*
 * @lc app=leetcode id=134 lang=cpp
 *
 * [134] Gas Station
 */

// @lc code=start
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int start_index = 0, gas_tank = 0, sum = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            sum += gas[i] - cost[i];
            gas_tank += gas[i] - cost[i];
            if (gas_tank < 0)
            {
                start_index = i + 1;
                gas_tank = 0;
            }
        }
        return sum < 0 ? -1 : start_index;
    }
};
// @lc code=end
