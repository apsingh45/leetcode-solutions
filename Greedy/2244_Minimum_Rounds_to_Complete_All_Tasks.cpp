// Time Complexity - O(n log n)
// Space Complexity - O(n) 

// Medium
// Leetcode - https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());
        unordered_map<int,int>freq;
        for(auto it : tasks){
            freq[it]++;
        }
        int round = 0;
        for (auto &a : freq) {
            int num = a.second;
            if (num == 1) {  
                return -1; 
            }
            round += num / 3;     
            if (num % 3 != 0) { 
                round++; 
            }
        }
        return round;
    }
};