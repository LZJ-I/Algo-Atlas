/*
 * @lc app=leetcode.cn id=238 lang=cpp
 * @lcpr version=30403
 *
 * [238] 除了自身以外数组的乘积
 */

// @lc code=start
using namespace std;
#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 定义一个数组来存储结果
        vector<int> result(nums.size(), 1);

        /* 
            思路：先计算每个位置的前缀乘积，再计算后缀乘积并更新结果
            前缀乘积：当前数左边所有数的乘积
            后缀乘积：当前数右边所有数的乘积
            答案 = 前缀 × 后缀
            代码用两次遍历分别算出，不用除法，不新开数组，完美满足题目要求
        */

        // 从左到右计算前缀乘积
        for (int i = 1; i < nums.size(); i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        // 从右到左计算后缀乘积并更新结果
        int rightProduct = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        return result;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [-1,1,0,-3,3]\n
// @lcpr case=end

 */

