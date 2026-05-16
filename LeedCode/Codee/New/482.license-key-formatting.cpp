/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp = "";
        
        // Remove dashes and convert to uppercase
        for(char c : s){
            if(c != '-')
                temp += toupper(c);
        }

        string ans = "";
        int cnt = 0;

        // Build from end
        for(int i = temp.size() - 1; i >= 0; i--){
            ans += temp[i];
            cnt++;

            if(cnt == k && i != 0){
                ans += '-';
                cnt = 0;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};