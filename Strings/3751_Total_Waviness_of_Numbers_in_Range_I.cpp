// Time Complexity - O(N log N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/total-waviness-of-numbers-in-range-i

class Solution {
public:
    int waviness(int x){
        string s = to_string(x);

        int count  = 0;
        for(int i = 1;i<s.size()-1;i++){
            if((s[i] > s [i-1] && s[i] > s[i+1]) || 
                (s[i] < s[i-1] && s[i] < s[i+1])) count++;
        }
        return count;
    }
    int totalWaviness(int num1, int num2) {
        long long ans = 0;
        for(int i = num1;i<=num2;i++){
            ans += waviness(i);
        }
        return ans;
    }
};