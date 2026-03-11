// Time Complexity - O(n²)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        if(count !=0){
            k = k % count ;
        }
        while(k > 0){
            if (!head || !head->next) return head; 
            ListNode* secondLast = head;
            while (secondLast->next->next) {
                secondLast = secondLast->next;
            }
            k--;
            ListNode* last = secondLast->next;
            secondLast->next = NULL;  
            last->next = head;
            head = last; 
    }     

    return head;

    }
};