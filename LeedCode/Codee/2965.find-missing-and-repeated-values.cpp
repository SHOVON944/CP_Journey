/*
 * @lc app=leetcode id=2965 lang=cpp
 *
 * [2965] Find Missing and Repeated Values
 */
// #include<bits/stdc++.h>
// using namespace std;



// @lc code=start
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int N = grid.size() * grid.size();
        vector<int> freq(N+1, 0);
        for(vector<int> &row : grid){
            for(int x : row){
                freq[x]++;
            }
        }

        int repeat_num = 0;
        int missing_num = 0;

        for(int i=1; i<=N; i++){
            if(freq[i]==2) repeat_num = i;
            if(freq[i]==0) missing_num = i;
        }

        return {repeat_num, missing_num};
    }
};
// @lc code=end



// int main()
// {


//     return 0;
// }