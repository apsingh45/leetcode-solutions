// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/separate-black-and-white-balls

class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        long long count = 0;
        int i = s.size() - 1;
        while(i >= 0){
            if(s[i] == '0'){
                count++;
            }
            else if(s[i] == '1'){
                ans += count;
            }
            i--;
        }
        return ans;
    }
};