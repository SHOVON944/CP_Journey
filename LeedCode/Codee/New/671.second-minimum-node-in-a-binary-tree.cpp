/*
 * @lc app=leetcode id=671 lang=cpp
 *
 * [671] Second Minimum Node In a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long ans = -1;
    int mn;

    void dfs(TreeNode* root){
        if(root == NULL){
            return;
        }

        if(root->val > mn){
            if(ans == -1 || root->val < ans){
                ans = root->val;
            }
        }

        dfs(root->left);
        dfs(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        mn = root->val;

        dfs(root);

        return ans;
    }
};