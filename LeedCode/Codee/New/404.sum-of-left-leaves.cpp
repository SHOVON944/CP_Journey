/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
 */

// @lc code=start
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int sum = 0;

        if(root->left != NULL){
            if(root->left->left == NULL && root->left->right == NULL){
                sum += root->left->val;
            } else{
                sum += sumOfLeftLeaves(root->left);
            }
        }

        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};