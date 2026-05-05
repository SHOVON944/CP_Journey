/*
 * @lc app=leetcode id=495 lang=cpp
 *
 * [495] Teemo Attacking
 */

class Solution{
public:
    int findPoisonedDuration(vector<int>& a,int d){
        int n=a.size(),ans=0;
        for(int i=1;i<n;i++){
            ans+=min(d,a[i]-a[i-1]);
        }
        return ans+d;
    }
};