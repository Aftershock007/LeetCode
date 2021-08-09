/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution
{
public:
    string intToRoman(int num)
    {
        string res = "";
        while (num >= 1000)
        {
            res += "M";
            num = num - 1000;
        }
        while (num >= 900)
        {
            res += "CM";
            num = num - 900;
        }
        while (num >= 500)
        {
            res += "D";
            num = num - 500;
        }
        while (num >= 400)
        {
            res += "CD";
            num = num - 400;
        }
        while (num >= 100)
        {
            res += "C";
            num = num - 100;
        }
        while (num >= 90)
        {
            res += "XC";
            num = num - 90;
        }
        while (num >= 50)
        {
            res += "L";
            num = num - 50;
        }
        while (num >= 40)
        {
            res += "XL";
            num = num - 40;
        }
        while (num >= 10)
        {
            res += "X";
            num = num - 10;
        }
        while (num == 9)
        {
            res += "IX";
            num = num - 9;
        }
        while (num >= 5)
        {
            res += "V";
            num = num - 5;
        }
        while (num == 4)
        {
            res += "IV";
            num = num - 4;
        }
        while (num >= 1)
        {
            res += "I";
            num = num - 1;
        }
        return res;
    }
};
// @lc code=end
