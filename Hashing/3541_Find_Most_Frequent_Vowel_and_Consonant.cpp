// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leetcode - https://leetcode.com/problems/find-most-frequent-vowel-and-consonant

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> v_freq;
        unordered_map<char, int> c_freq;
        int max_c = 0;
        int max_v = 0;
        for (char c : s) {
            if(c == 'a' ||c == 'e'||c == 'i'||c == 'o'||c == 'u'){
                v_freq[c]++;
            }
            else{
                c_freq[c]++;
            }
        }
        for(auto &a : c_freq){
            max_c=max(max_c,a.second);
        }
        for(auto &b : v_freq){
            max_v = max(max_v,b.second);
        }
        return max_c + max_v;
    }
};