// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=605 lang=cpp
 * @lcpr version=30402
 *
 * [605] 种花问题
 */

// @lc code=start
using namespace std;
#include <vector>

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // 计算连续的0的数量
        int count = 1; // 从1开始，考虑到开头的0
        int total = 0; // 可种植的花的数量
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 0) {
                count++;
            } else {
                // 遇到1，计算之前的连续0的数量
                total += (count - 1) / 2; // 每两个0可以种一朵花
                count = 0; // 重置计数器
            }
        }
        // 处理结尾的连续0
        total += count / 2; // 每两个0可以种一朵花
        return total >= n; // 判断是否可以种植n朵花
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,0,0,0,1]\n1\n
// @lcpr case=end

// @lcpr case=start
// [1,0,0,0,1]\n2\n
// @lcpr case=end

 */

