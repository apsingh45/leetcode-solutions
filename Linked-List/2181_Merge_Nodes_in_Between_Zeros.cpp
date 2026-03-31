// Time Complexity - O(n)
// Space Complexity - O(n) 

// Easy
// Leetcode - https://leetcode.com/problems/merge-nodes-in-between-zeros

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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>num;
        vector<int>result;
        ListNode* temp = head;
        while(temp){
            num.push_back(temp->val);
            temp =temp->next;
        }
        int sum = 0;
        for(int i = 0; i<num.size();i++){
            sum = 0;
            while(num[i] != 0){
                sum += num[i];
                i++;
            }
            result.push_back(sum);
        }

        temp = head;
        for(int i = 1;i < result.size();i++){
            temp->val = result[i];
            if(i != result.size()-1) temp = temp->next;
        }
        temp ->next = nullptr;

        return head;
    }
};