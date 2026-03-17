// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/binary-tree-right-side-view


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
    vector<int> rightSideView(TreeNode* root) {
       vector<int>result; 
        if(root == NULL) return result;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int value = 0;
            int level_size = q.size();
            for(int i = 1;i<=level_size;i++){
                TreeNode* n = q.front();
                value = n->val;

                if(n->left != NULL){
                    q.push(n->left);
                }
                if(n->right != NULL){
                    q.push(n->right);
                }
                q.pop();
            }
            result.push_back(value);
        }
        return result;
    }
};  
   