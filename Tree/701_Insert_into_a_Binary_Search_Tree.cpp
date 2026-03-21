// Time Complexity - O(h) , h = height of BST
// Space Complexity -O(1)

// Medium
// Leetcode - https://leetcode.com/problems/insert-into-a-binary-search-tree

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* new_node = new TreeNode(val);
        TreeNode* temp = root;

        if(root == NULL) return new_node;

        while(root){
            if(root->val <= val){
                if(root->right != NULL) root = root->right;
                else {
                    root->right = new_node;
                    break;   
                }
            }
            else{
                if(root->left != NULL) root = root->left;
                else{
                    root->left = new_node;
                    break;
                }
            }
        }
        return temp;
    }
};