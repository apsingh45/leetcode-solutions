// Time Complexity - O(n)
// Space Complexity - O(min(n, charset))

// Medium 
// Leetcode - https://leetcode.com/problems/longest-substring-without-repeating-characters


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int i = 0,j = 0;
        unordered_map<char,int>map;
        while(i<s.size()){
            while(j<s.size() && (map.find(s[j]) == map.end() || map[s[j]] == 0)){
                map[s[j]]++;
                j++;
            }
            max_length =max(max_length,j-i);
            map[s[i++]]--;
        }
        return max_length;
    }
};