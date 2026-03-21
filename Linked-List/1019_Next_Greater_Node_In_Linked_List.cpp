// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/next-greater-node-in-linked-list

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>result;
        vector<int>list;
        while(head != NULL){
            list.push_back(head->val);
            head = head->next;
        }
        for(int i = 0;i<list.size();i++){
            int a = i;
            int n = list[i];
            i++;
            while(i < list.size() && n >= list[i]){
                i++;
            }
            if(i != list.size()){
                result.push_back(list[i]);
                i = a;
            }
            else{
                result.push_back(0);
                i = a;
            } 
        }
        return result;
    }
};