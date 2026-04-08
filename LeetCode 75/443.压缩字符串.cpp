/*
 * @lc app=leetcode.cn id=443 lang=cpp
 * @lcpr version=30403
 *
 * [443] 压缩字符串
 */

// @lc code=start
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
    int compress(vector<char>& chars) {
        // 定义一个指针来记录压缩后的字符串位置
        int index = 0;
        // 遍历输入的字符数组
        for (int i = 0; i < chars.size();) {
            char currentChar = chars[i]; // 当前字符
            int count = 0; // 计数器，记录当前字符的出现次数
            // 统计当前字符的连续出现次数
            while (i < chars.size() && chars[i] == currentChar) {
                count++;
                i++;
            }
            // 将字符和其出现次数写入原数组
            chars[index++] = currentChar;
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[index++] = c;
                }
            }
        }
        return index; // 返回压缩后的字符串长度
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["a","a","b","b","c","c","c"]\n
// @lcpr case=end

// @lcpr case=start
// ["a"]\n
// @lcpr case=end

// @lcpr case=start
// ["a","b","b","b","b","b","b","b","b","b","b","b","b"]\n
// @lcpr case=end

 */

