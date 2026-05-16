/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();

        for(int len = 1; len <= n/2; len++){

            if(n % len == 0){

                string sub = s.substr(0, len);
                string temp = "";

                int times = n / len;

                for(int i = 0; i < times; i++){
                    temp += sub;
                }

                if(temp == s){
                    return true;
                }
            }
        }

        return false;
    }
};
// @lc code=end