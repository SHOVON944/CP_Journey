/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

// @lc code=start
class Solution {
public:
    int getDay(string s){
        vector<int>days={31,28,31,30,31,30,31,31,30,31,30,31};

        int month=stoi(s.substr(0,2));
        int day=stoi(s.substr(3,2));

        int total=0;

        for(int i=0;i<month-1;i++){
            total+=days[i];
        }

        return total+day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1=getDay(arriveAlice);
        int a2=getDay(leaveAlice);

        int b1=getDay(arriveBob);
        int b2=getDay(leaveBob);

        int l=max(a1,b1);
        int r=min(a2,b2);

        return max(0,r-l+1);
    }
};
// @lc code=end