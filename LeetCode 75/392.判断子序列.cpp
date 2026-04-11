/*
 * @lc app=leetcode.cn id=392 lang=cpp
 * @lcpr version=30403
 *
 * [392] 判断子序列
 */

// @lc code=start
using namespace std;
#include <string>

class Solution {
public:
    bool isSubsequence(string s, string t) {
        // 定义两个指针，分别指向字符串 s 和 t 的当前字符位置
        int i = 0, j = 0;
        // 遍历字符串 t，寻找字符串 s 的字符
        while(i < s.size() && j < t.size()) {
            // 如果当前字符匹配，移动 s、t 的指针   
           if(s[i] == t[j]) {
                i++; 
                j++;
            }
            // 如果当前字符不匹配，只移动 t 的指针
            else{
                j++;
            }
        }
        // 如果 s 的指针已经到达末尾，说明 s 是 t 的子序列
        return i == s.size();
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abc"\n"ahbgdc"\n
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// "abc"\n"ahbgdc"\n
// @lcpr case=end

// @lcpr case=start
// "axc"\n"ahbgdc"\n
// @lcpr case=end

 */

