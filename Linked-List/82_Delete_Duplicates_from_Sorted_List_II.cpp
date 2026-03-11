// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii


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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        ListNode* ans = &dummy;
        ListNode* temp =head;
        map<int,int>freq;
        while(temp){
           freq[temp->val]++;
           temp = temp->next;
        }

        for(auto &a : freq){
            if(a.second == 1){
                ans->next = new ListNode(a.first);
                ans = ans->next;
            }
        }
        return dummy.next;

    }
};