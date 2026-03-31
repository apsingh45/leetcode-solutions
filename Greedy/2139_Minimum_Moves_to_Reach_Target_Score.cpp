// Time Complexity -O(log target)
// Space Complexity - O(1) 

// Medium 
// Leetcode - https://leetcode.com/problems/minimum-moves-to-reach-target-score

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        while(target > 1){
            if(maxDoubles == 0) return count + target - 1;
            if(target % 2 == 0 && maxDoubles > 0){
                count++;
                maxDoubles--;
                target /=2;
            }
            else{
                count++;
                target--;
            }
        }
        return count; 
    }
};