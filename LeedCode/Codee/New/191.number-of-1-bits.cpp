/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n){
        int cnt=0;
        while(n){
            cnt+=n&1;
            n>>=1;
        }
        return cnt;
    }
};