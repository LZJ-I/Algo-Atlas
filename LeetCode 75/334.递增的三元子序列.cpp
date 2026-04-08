/*
 * @lc app=leetcode.cn id=334 lang=cpp
 * @lcpr version=30403
 *
 * [334] 递增的三元子序列
 */

// @lc code=start
using namespace std;
#include <vector>
#include <climits>

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;        // 记录第一个数，即最小的数
        int second = INT_MAX;       // 记录第二个数，即第二小的数

        // 遍历数组，更新 first 和 second 的值
        for (int x : nums) {
            if (x <= first) {
                first = x;
            } else if (x <= second) {
                second = x;
            } else {
                // x > second > first
                return true;
            }
        }
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [5,4,3,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [2,1,5,0,4,6]\n
// @lcpr case=end

 */

