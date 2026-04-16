/*
 * @lc app=leetcode.cn id=1679 lang=cpp
 * @lcpr version=30403
 *
 * [1679] K 和数对的最大数目
 */

// @lc code=start
using namespace std;
#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        // 使用哈希表记录每个数字出现的次数
        unordered_map<int, int> freq;
        for (int num : nums) {
            int complement = k - num; // 计算补数
            // 如果补数存在且频率大于0，说明可以组成一对
            if (freq[complement] > 0) {
                count++; // 增加计数
                freq[complement]--; // 减少补数的频率
            } else {
                freq[num]++; // 否则增加当前数字的频率
            }
        }
        return count;

    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4]\n5\n
// @lcpr case=end

// @lcpr case=start
// [3,1,3,4,3]\n6\n
// @lcpr case=end

 */

