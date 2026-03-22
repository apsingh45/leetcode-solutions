// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one

class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        int carry = 0;

        for(int i = s.size() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;

            if(bit == 1) { 
                count += 2;
                carry = 1;
            } 
            else {
                count += 1;
            }
        }

        return count + carry;
    }
};