// Time Complexity - O(n x d)
// Space Complexity -O(n)

// Easy
// Leetcode - https://leetcode.com/problems/self-dividing-numbers

class Solution {
public:
    bool selfdividing(int n) {
        int temp = n;
        int rem;
        while(n > 0) { 
            rem = n % 10;
            if(rem == 0 || temp % rem != 0) return false; 
            n = n / 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i <= right; i++) {
            if(selfdividing(i)) {
                result.push_back(i);
            }
        }
        return result;
    }
};