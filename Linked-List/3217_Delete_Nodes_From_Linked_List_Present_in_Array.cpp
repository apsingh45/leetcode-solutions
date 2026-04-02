// Time Complexity - O(n + m)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(), nums.end());
        while (head && s.find(head->val) != s.end()) {
            head = head->next;
        }
        
        ListNode* temp = head;
        while (temp && temp->next) {
            if (s.find(temp->next->val) != s.end()) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};