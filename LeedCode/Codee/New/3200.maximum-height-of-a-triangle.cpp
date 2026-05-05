/*
 * @lc app=leetcode id=3200 lang=cpp
 *
 * [3200] Maximum Height of a Triangle
 */

class Solution{
public:
    int f(int r,int b,bool redStart){
        int i=1;
        while(1){
            if(redStart){
                if(r<i)break;
                r-=i;
            }else{
                if(b<i)break;
                b-=i;
            }
            redStart=!redStart;
            i++;
        }
        return i-1;
    }
    
    int maxHeightOfTriangle(int red,int blue){
        return max(f(red,blue,1),f(red,blue,0));
    }
};