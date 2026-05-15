/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

/*
 * @lc app=leetcode id=575 lang=cpp
 *
 * [575] Distribute Candies
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;

        for(int i = 0; i < candyType.size(); i++){
            s.insert(candyType[i]);
        }

        int n = candyType.size() / 2;

        return min((int)s.size(), n);
    }
};
// @lc code=end