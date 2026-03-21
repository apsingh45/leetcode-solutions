// Time Complexity - O(n)
// Space Complexity - O(h) , h = Height of Tree

// Medium
// Leetcode - https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves

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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        dfs(root,p,q);
        return ans;

         bool dfs(TreeNode* node,TreeNode* p,TreeNode* q){
        if(node == nullptr) return false;

        bool leftStatus = dfs(node->left,p,q);
        bool rightStatus = dfs(node->right,p,q);

        if((leftStatus == true && rightStatus == true) || (leftStatus == true && node == q) || (leftStatus == true && node == p) || (rightStatus == true && node == p) || (rightStatus == true && node == q) ){
             ans = node;
        }

        if(rightStatus || leftStatus || node == p || node == q) return true;

        else return false;
    }
};