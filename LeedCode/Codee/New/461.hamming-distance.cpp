/*
 * @lc app=leetcode id=461 lang=cpp
 *
 * [461] Hamming Distance
 */

// @lc code=start
class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int n = x ^ y;
        int cnt = 0;

        while(n){

            if(n % 2 == 1){
                cnt++;
            }

            n /= 2;
        }

        return cnt;
    }
};
// @lc code=end