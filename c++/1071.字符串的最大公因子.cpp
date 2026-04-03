/*
 * @lc app=leetcode.cn id=1071 lang=cpp
 *
 * [1071] 字符串的最大公因子
 */

// @lc code=start
using namespace std;
#include <string>
#include <numeric>

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1) {  // 如果两字符串拼接不相等，则没有最大公因子
            return "";
        }
        int gcdLength = gcd(str1.length(), str2.length());  // 求两字符串长度的最大公约数
        return str1.substr(0, gcdLength);  // 返回str1的前gcdLength个字符
    }
};
// @lc code=end

