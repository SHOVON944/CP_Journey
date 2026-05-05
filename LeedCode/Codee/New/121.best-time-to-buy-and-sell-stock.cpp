/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

class Solution{
public:
    int maxProfit(vector<int>& a){
        int mn=INT_MAX,ans=0;
        for(int i=0;i<a.size();i++){
            mn=min(mn,a[i]);
            ans=max(ans,a[i]-mn);
        }
        return ans;
    }
};