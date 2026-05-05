/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */
class Solution{
public:
    int thirdMax(vector<int>& a){
        long long x=LLONG_MIN,y=LLONG_MIN,z=LLONG_MIN;
        for(int i=0;i<a.size();i++){
            long long v=a[i];
            if(v==x||v==y||v==z)continue;
            if(v>x){
                z=y;
                y=x;
                x=v;
            }else if(v>y){
                z=y;
                y=v;
            }else if(v>z){
                z=v;
            }
        }
        return z==LLONG_MIN?x:z;
    }
};