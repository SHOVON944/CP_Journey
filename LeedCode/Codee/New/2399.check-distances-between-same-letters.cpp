/*
 * @lc app=leetcode id=2399 lang=cpp
 *
 * [2399] Check Distances Between Same Letters
 */

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>pos(26,-1);

        for(int i=0;i<s.size();i++){
            int x=s[i]-'a';

            if(pos[x]==-1){
                pos[x]=i;
            }
            else{
                if(i-pos[x]-1!=distance[x]){
                    return false;
                }
            }
        }

        return true;
    }
};