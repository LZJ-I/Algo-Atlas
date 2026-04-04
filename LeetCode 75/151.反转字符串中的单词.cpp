/*
 * @lc app=leetcode.cn id=151 lang=cpp
 * @lcpr version=30402
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
using namespace std;
#include <string>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
         // 1. 去掉多余空格
        string temp;
        int i = 0, n = s.size();
        while (i < n) {
            while (i < n && s[i] == ' ') i++;  // 跳过前导空格
            
            if (i >= n) break;

            if (!temp.empty()) temp += ' ';    // 在temp后添加一个空格

            while (i < n && s[i] != ' ') {      // 添加单词到temp
                temp += s[i++];
            }
        }

        // 2. 反转整个字符串
        reverse(temp.begin(), temp.end());

        // 3. 反转每个单词
        int start = 0;
        for (int i = 0; i <= temp.size(); i++) {
            if (i == temp.size() || temp[i] == ' ') {
                reverse(temp.begin() + start, temp.begin() + i);
                start = i + 1;
            }
        }

        return temp;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "the sky is blue"\n
// @lcpr case=end

// @lcpr case=start
// "  hello world  "\n
// @lcpr case=end

// @lcpr case=start
// "a good   example"\n
// @lcpr case=end

 */

