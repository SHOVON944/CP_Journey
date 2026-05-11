/*
 * @lc app=leetcode id=2535 lang=cpp
 *
 * [2535] Difference Between Element Sum and Digit Sum of an Array
 */

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;

        for(int i = 0; i < nums.size(); i++){
            elementSum += nums[i];

            int x = nums[i];

            while(x > 0){
                digitSum += x % 10;
                x /= 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};