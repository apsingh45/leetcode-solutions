// Time Complexity - O(n)
// Space Complexity - O(h)

// Medium
// Leetcode - https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans = nullptr;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root,p,q);
        return ans;
    }

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