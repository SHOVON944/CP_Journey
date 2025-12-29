
#include<bits/stdc++.h>
usnig namespace stt;
/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int x : nums){
            if(check.find(x) != check.end()) return true;
            else check.insert(x);
        }
        return false;
    }
};
// @lc code=end
