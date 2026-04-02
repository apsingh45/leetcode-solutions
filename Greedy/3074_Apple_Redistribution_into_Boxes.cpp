// Time Complexity - O(n log n)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/apple-redistribution-into-boxes

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = 0;
        for(int i = 0;i<apple.size();i++){
            apples += apple[i];
        }

        sort(capacity.begin(),capacity.end(), greater<int>());

        int ans = 0;
        int i = 0;
        while(i < capacity.size() && apples > 0){
            ans++;
            apples -= capacity[i++];
        }
        return ans;
    }
};