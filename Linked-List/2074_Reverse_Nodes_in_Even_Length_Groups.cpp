// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/reverse-nodes-in-even-length-groups

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
    ListNode* reverseBetween(ListNode* head,int left,int right){
        if(!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        for(int i=1;i < left;i++){
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        ListNode* next = NULL;

        for(int i=0;i <right-left;i++){
            next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        return dummy.next;
    }

    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr = head;
        int groupSize = 1;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevEnd = &dummy;

        while(curr){
            ListNode* temp = curr;
            int count = 0;

            while(temp && count<groupSize){
                temp = temp->next;
                count++;
            }
            if(count % 2 == 0){
                ListNode* groupStart = curr;
                ListNode* prev = temp;
                for(int i = 0;i<count;i++){
                    ListNode* next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }
                prevEnd->next = prev;
                prevEnd = groupStart;
            }
            else{
                for(int i = 0;i<count;i++){
                    prevEnd = curr;
                    curr = curr->next;
                }
            }
            groupSize++;
        }
        return dummy.next;
    }
};