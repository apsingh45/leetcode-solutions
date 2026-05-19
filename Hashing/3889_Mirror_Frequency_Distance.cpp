// Time Complexity - O(N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/mirror-frequency-distance

class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> freq(128,0);
        int ans = 0;

        for(char ch : s){
            freq[ch]++;
        }

        for(char ch : s){
            if(freq[ch] == -1) continue;

            char m;
            if(ch >= 'a' && ch <= 'z'){
                m = 'a' + ('z' - ch);
            }
            if(ch >= '0' && ch <= '9'){
                m = '0' + ('9' - ch);
            }

            ans += abs(freq[ch] - freq[m]);
            freq[ch] = -1;
            freq[m] = -1;
        }
        return ans;
    }
};