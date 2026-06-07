// Time Complexity - O(N log N)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/create-binary-tree-from-descriptions

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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        int n = descriptions.size();
        unordered_map<int,TreeNode*>mp;
        set<int>s;
        for(int i = 0;i<n;i++){
            s.insert(descriptions[i][1]);
        }

        int rootval = -1;

        for(int i = 0;i<n;i++){
            if(s.find(descriptions[i][0]) == s.end()){
                rootval = descriptions[i][0];
            }
        }

        TreeNode* root = new TreeNode(rootval);
        mp[rootval] = root;

        for(int i = 0;i<n;i++){
            int a = descriptions[i][0];
            int b = descriptions[i][1];

            if(mp.find(a) == mp.end()){
                TreeNode* curr = new TreeNode(a);
                mp[a] = curr;
            }

            if(mp.find(b) == mp.end()){
                TreeNode* curr = new TreeNode(b);
                mp[b] = curr;
            }
        }

        for(int i = 0;i<n;i++){
            int a = descriptions[i][0];
            int b = descriptions[i][1];
            int flag = descriptions[i][2];

            if(flag == 1){
                mp[a]->left = mp[b];
            } else mp[a]->right = mp[b];
        }
        return root;
    }
};