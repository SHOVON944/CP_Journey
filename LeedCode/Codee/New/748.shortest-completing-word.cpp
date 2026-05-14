/*
 * @lc app=leetcode id=748 lang=cpp
 *
 * [748] Shortest Completing Word
 */

class Solution {
public:
    bool check(vector<int>& need, string word){
        vector<int> freq(26, 0);

        for(char c : word){
            freq[c - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] < need[i]){
                return false;
            }
        }

        return true;
    }

    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> need(26, 0);

        for(char c : licensePlate){
            if(isalpha(c)){
                need[tolower(c) - 'a']++;
            }
        }

        string ans = "";

        for(string word : words){
            if(check(need, word)){
                if(ans == "" || word.size() < ans.size()){
                    ans = word;
                }
            }
        }

        return ans;
    }
};