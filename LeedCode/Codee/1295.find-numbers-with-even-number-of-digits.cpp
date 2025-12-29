/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int x : nums){
            if(to_string(x).size()%2==0) count++;
        }
        return count;
    }
};
// @lc code=end
