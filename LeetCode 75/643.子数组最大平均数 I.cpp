/*
 * @lc app=leetcode.cn id=643 lang=cpp
 * @lcpr version=30403
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
using namespace std;
#include <vector>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size() < k) return 0.0; // 如果数组长度小于k，无法形成子数组，返回0.0

        // 计算第一个窗口的和
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        long long maxSum = sum;

        // 滑动窗口
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k]; // 移除窗口左边的元素，添加窗口右边的元素
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;

    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,12,-5,-6,50,3]\n4\n
// @lcpr case=end

// @lcpr case=start
// [5]\n1\n
// @lcpr case=end

 */

