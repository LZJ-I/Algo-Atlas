/*
 * @lc app=leetcode.cn id=283 lang=cpp
 * @lcpr version=30403
 *
 * [283] 移动零
 */

// @lc code=start
using namespace std;
#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0; // 记录最后一个非零元素的位置
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                // 将非零元素移动到前面
                swap(nums[index++], nums[i]);
            }
        }
    }
};
// @lc code=end



/*
// @lcpr case=start
// [0,1,0,3,12]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

