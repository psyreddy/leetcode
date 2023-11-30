/*
 * @lc app=leetcode id=477 lang=cpp
 *
 * [477] Total Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<32;i++){
            int on = 0;
            for(auto num:nums){
                if( (num>>i) & 1 ) on++;
            }
            int off = nums.size() - on;
            sum+=on*off;
        }
        return sum;
    }
};
// @lc code=end

