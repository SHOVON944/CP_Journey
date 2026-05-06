/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

class Solution {
public:
    bool isPowerOfThree(int n){
        return n>0 && 1162261467%n==0;
    }
};