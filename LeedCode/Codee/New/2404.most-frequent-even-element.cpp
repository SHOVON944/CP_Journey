/*
 * @lc app=leetcode id=2404 lang=cpp
 *
 * [2404] Most Frequent Even Element
 */
/*
 * @lc app=leetcode id=2404 lang=cpp
 *
 * [2404] Most Frequent Even Element
 */

// @lc code=start
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;

        for(int x:nums){
            if(x%2==0){
                mp[x]++;
            }
        }

        int ans=-1,mx=0;

        for(auto it:mp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }
        }

        return ans;
    }
};
// @lc code=end