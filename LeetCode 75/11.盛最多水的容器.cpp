/*
 * @lc app=leetcode.cn id=11 lang=cpp
 * @lcpr version=30403
 *
 * [11] 盛最多水的容器
 */

// @lc code=start

using namespace std;
#include <vector>

class Solution {
public:
    int maxArea(vector<int>& height) {
        // 如果遇到了比当前高度更高的柱子，更新最大面积
        int max_area = 0;
        // 定义两个指针，分别指向数组的左右两端
        int left = 0, right = height.size() - 1;
        for(; left < right; ) {
            // 计算当前面积
            int area = (right - left) * min(height[left], height[right]);
            // 更新最大面积
            if(area > max_area) {
                max_area = area;
            }
            // 移动较短的指针，寻找更高的柱子
            if(height[left] < height[right]) {
                left++;
            }
            else{
                right--;
            }
        }

        return max_area;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,8,6,2,5,4,8,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,1]\n
// @lcpr case=end

 */

