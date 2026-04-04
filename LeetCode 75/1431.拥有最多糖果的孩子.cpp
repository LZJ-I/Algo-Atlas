/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

// @lc code=start
using namespace std;
#include <vector>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> result;   // 定义一个布尔向量来存储每个孩子是否能拥有最多的糖果
        // 寻找所有孩子中糖果数量的最大值
        int maxCandies = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++) {   // 遍历每个孩子的糖果数量
            // 如果当前孩子的糖果数量加上额外的糖果数量小于所有孩子中糖果数量的最大值，则该孩子不能拥有最多的糖果
            if(candies[i] + extraCandies < maxCandies) {
                result.push_back(false);
            } else {
                result.push_back(true);
            }
        }
        return result;
    }
};
// @lc code=end

