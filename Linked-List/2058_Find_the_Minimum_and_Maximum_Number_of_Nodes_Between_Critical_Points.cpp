// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next) return {-1, -1};
        ListNode* curr = head;
        ListNode* prev = NULL;

        vector<int>criticals;
        int pos = 2;

        while(curr && curr->next){
            pos++;
            if(prev){
                if(prev->val > curr->val && curr->next->val > curr->val){
                    criticals.push_back(pos);
                }

                else if(prev->val < curr->val && curr->next->val < curr->val){
                    criticals.push_back(pos);
                }
            }
            prev = curr;
            curr = curr->next;
        }
        
        int n = criticals.size();
        if(n<2) return {-1,-1};
        int max_distance = criticals[n-1] - criticals[0];
        int min_distance = INT_MAX;

        for(int i = 1;i<n;i++){
            int a = criticals[i] - criticals[i-1];
            min_distance = min(min_distance,a);
        }
        return {min_distance,max_distance};
    }
};