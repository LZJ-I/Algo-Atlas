/*
 * @lc app=leetcode.cn id=345 lang=cpp
 * @lcpr version=30402
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
using namespace std;
#include <string>

class Solution {
public:
    string reverseVowels(string s) {
        // 定义元音字母集合
        string vowels = "aeiouAEIOU";
        // 使用双指针法
        int left = 0, right = s.size() - 1;
        while (left < right) {
            // 移动左指针直到找到元音字母
            while (left < right && vowels.find(s[left]) == string::npos) {
                left++;
            }
            // 移动右指针直到找到元音字母
            while (left < right && vowels.find(s[right]) == string::npos) {
                right--;
            }
            // 交换两个元音字母
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "IceCreAm"\n
// @lcpr case=end

// @lcpr case=start
// "leetcode"\n
// @lcpr case=end

 */

