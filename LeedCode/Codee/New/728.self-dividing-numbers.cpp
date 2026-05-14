/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution {
public:
    bool check(int n) {
        int x = n;
        
        while (x > 0) {
            int digit = x % 10;
            
            if (digit == 0 || n % digit != 0)
                return false;
            
            x /= 10;
        }
        
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for (int i = left; i <= right; i++) {
            if (check(i))
                ans.push_back(i);
        }
        
        return ans;
    }
};
// @lc code=end