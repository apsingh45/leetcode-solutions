// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Hard
// Leetcode - https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>num;
        for(int i = 0;i< lists.size();i++){
            ListNode* temp = lists[i];
            while(temp){
                num.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(num.begin(),num.end());
        
        if (num.empty()) return nullptr;

        ListNode* head = new ListNode(num[0]);
        ListNode* temp = head;
        for(int i = 1;i<num.size();i++){
            ListNode* newNode = new ListNode(num[i]);
            temp->next = newNode;
            temp = newNode;
        }
        return head;
        
    }
};