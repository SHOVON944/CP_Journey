/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26,0);

        for(char c : magazine){
            freq[c - 'a']++;
        }

        for(char c : ransomNote){
            if(freq[c - 'a'] == 0){
                return false;
            }

            freq[c - 'a']--;
        }

        return true;
    }
};