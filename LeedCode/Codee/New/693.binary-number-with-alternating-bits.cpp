/*
 * @lc app=leetcode id=693 lang=cpp
 *
 * [693] Binary Number with Alternating Bits
 */

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n % 2;
        n /= 2;

        while(n > 0){
            int cur = n % 2;

            if(cur == prev){
                return false;
            }

            prev = cur;
            n /= 2;
        }

        return true;
    }
};