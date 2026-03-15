// Time Complexity - O(n log n)
// Space Complexity - O(log n)

// Medium 
// Leetcode - https://leetcode.com/problems/sort-list

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
    ListNode* middle(ListNode* head){
        if(head == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;

    }

    ListNode* mergeList(ListNode* list1,ListNode* list2){
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        if(list1 -> val < list2 -> val){
            list1 -> next = mergeList(list1 -> next,list2);
            return list1;
        }
        else{
            list2 -> next = mergeList(list1, list2 -> next);
            return list2;
        }
    }

    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next == NULL)
        return head;

        ListNode* mid = middle(head);
        ListNode* head2 = mid->next;
        mid->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(head2);

        ListNode* ans = mergeList(left,right);

        return ans ;
        
    }
};