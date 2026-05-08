/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

class Solution {
public:
    int guessNumber(int n){
        long long l=1,r=n;

        while(l<=r){
            long long mid=l+(r-l)/2;

            int x=guess(mid);

            if(x==0)return mid;
            else if(x==1)l=mid+1;
            else r=mid-1;
        }

        return -1;
    }
};