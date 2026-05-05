/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 */
class Solution{
public:
    int arrangeCoins(int n){
        long long l=1,r=n,ans=0;
        while(l<=r){
            long long m=(l+r)/2;
            long long sum=m*(m+1)/2;
            if(sum<=n){
                ans=m;
                l=m+1;
            }else r=m-1;
        }
        return (int)ans;
    }
};