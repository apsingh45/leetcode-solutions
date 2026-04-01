// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/remove-nodes-from-linked-list

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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int>nodes;
        while(temp){
            nodes.push_back(temp->val);
            temp = temp->next;
        }
        int n = nodes.size();
        int curr_max = nodes[n-1];
        for(int i = n-1;i>=0;i--){
            if(nodes[i] < curr_max){
                nodes[i] = 0;
            }
            curr_max = max(curr_max,nodes[i]);
        }
        int i = 0;
        temp = head;
        ListNode* curr_head = head;
        bool a = true;
        while(temp){
            if(nodes[i] != 0 && a){
                curr_head = temp;
                nodes[i] = 0;
                a = false;
            }
            i++;
            temp = temp->next;
        }
        temp = head;
        ListNode* ans = curr_head;
        i = 0;
        while(temp){
            if(nodes[i] != 0){
                curr_head ->next = temp;
                curr_head = curr_head ->next;
            }
            temp = temp->next;
            i++;
        }
        return ans;

    }
};