// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/split-linked-list-in-parts

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;

        while(temp){
            count++;
            temp = temp->next;
        }
        vector<ListNode*>ans(k,nullptr);
        int size = count/k;
        int extra = count%k;

        temp = head;
        for(int i = 0;i<k;i++){
            if(!temp) break;
            ans[i] = temp;

            int currSize = size +(extra>0 ? 1:0);
            extra--;

            for(int j = 1;j<currSize;j++){
                temp = temp->next;
            }

            ListNode* a = temp->next;
            temp->next = nullptr;
            temp = a;
        }
        return ans;
    }
};