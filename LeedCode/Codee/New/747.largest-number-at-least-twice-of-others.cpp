/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = -1;
        int idx = -1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mx){
                mx = nums[i];
                idx = i;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(i != idx && mx < 2 * nums[i]){
                return -1;
            }
        }

        return idx;
    }
};