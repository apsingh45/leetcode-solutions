// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy 
// Leetcode - https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0;i<operations.size();i++){
            string s = operations[i];
            if(s == "++X" || s == "X++"){
                x += 1;
            }
            else if (s == "--X" || s =="X--"){
                x -= 1;
            }
        }
        return x;
    }
};