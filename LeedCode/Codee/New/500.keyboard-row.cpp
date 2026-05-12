/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for(string word : words){
            string s = "";

            for(char c : word){
                s += tolower(c);
            }

            bool ok1 = true, ok2 = true, ok3 = true;

            for(char c : s){
                if(row1.find(c) == string::npos){
                    ok1 = false;
                }
                if(row2.find(c) == string::npos){
                    ok2 = false;
                }
                if(row3.find(c) == string::npos){
                    ok3 = false;
                }
            }

            if(ok1 || ok2 || ok3){
                ans.push_back(word);
            }
        }

        return ans;
    }
};