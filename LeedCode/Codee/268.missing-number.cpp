/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int store = (n*(n+1)) / 2;
        int sum = 0;
        for(int x: nums){
            sum += x;
        }
        return (store - sum);
    }
};
// @lc code=end
