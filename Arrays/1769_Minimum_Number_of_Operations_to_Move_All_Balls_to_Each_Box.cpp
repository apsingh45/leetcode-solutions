// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>result;
        for(int i = 0;i<boxes.size();i++){
            int left_step = 0;
            int right_step = 0;
            for(int j = 0;j<i;j++){
                if(boxes[j] == '1') left_step += abs(i-j);
            }
            for(int k = i+1;k<boxes.size();k++){
                if(boxes[k] == '1') right_step += abs(i-k);
            }
            result.push_back(left_step + right_step);
        }
        return result;
    }
};