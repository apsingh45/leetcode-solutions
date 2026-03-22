// Time Complexity - O(N^2)
// Space Complexity - O(1)

// Hard
// Leecode - https://leetcode.com/problems/reducing-dishes

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        int max = 0;
        for(int i = 0; i < n; i++) {
            int sum = 0;
            int a = 1;
            for(int j = i; j < n; j++) {
                sum += satisfaction[j] * a;
                a++;
            }
            if(sum > max) {
                max = sum;
            }
        }
        return max;
    }
};