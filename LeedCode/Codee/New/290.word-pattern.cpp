/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

class Solution {
public:
    bool wordPattern(string pattern,string s){
        vector<string>v;
        string cur="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(cur);
                cur="";
            }else cur+=s[i];
        }
        v.push_back(cur);

        if(v.size()!=pattern.size())return false;

        unordered_map<char,string>m1;
        unordered_map<string,char>m2;

        for(int i=0;i<pattern.size();i++){
            char c=pattern[i];
            string w=v[i];

            if(!m1.count(c) && !m2.count(w)){
                m1[c]=w;
                m2[w]=c;
            }else{
                if(m1[c]!=w || m2[w]!=c)return false;
            }
        }

        return true;
    }
};