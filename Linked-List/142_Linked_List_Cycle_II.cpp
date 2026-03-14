// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/linked-list-cycle-ii


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>map;
        int a = 0;
        while(head != NULL){
            if(map.find(head) != map.end()){
                return head;
            }
            else{
                map[head] = 1;
            }
            head = head->next;
        }
        return nullptr;
    }
};