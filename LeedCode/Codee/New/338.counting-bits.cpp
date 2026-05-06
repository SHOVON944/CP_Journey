/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

class Solution {
public:
    vector<int> countBits(int n){
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++){
            dp[i]=dp[i>>1]+(i&1);
        }
        return dp;
    }
};
