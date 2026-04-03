/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */

// @lc code=start

using namespace std;
#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {  // 只要有就一直加
            if (i < word1.length()) {   // 判断
                result += word1[i];
            }
            if (i < word2.length()) {   // 判断
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};
// @lc code=end

