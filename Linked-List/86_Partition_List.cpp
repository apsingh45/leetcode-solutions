// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/partition-list


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
    ListNode* partition(ListNode* head, int x) {
        ListNode result1(0);
        ListNode result2(1000);
        ListNode* less = &result1;
        ListNode* greater = &result2;
        while(head){
            if(head->val < x){
                less -> next = new ListNode(head->val);
                less = less->next; 
            }
            else {
                greater -> next = new ListNode(head->val);
                greater = greater->next; 
            }
            head=head->next;
        }
        less->next = result2.next; 

        return result1.next;


    }
};