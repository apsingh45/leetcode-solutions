// Time Complexity - O(n+m log n+m)
// Space Complexity - O(n + m) 

// Medium
// Leetcode - https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
    void inorder(TreeNode* rt , vector<int>&a){
        if(rt == NULL) return;

        inorder(rt->left,a);
        a.push_back(rt->val);
        inorder(rt->right,a);

    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>result;

        inorder(root1,result);
        inorder(root2,result);

        sort(result.begin(),result.end());

        return result;


    }
};