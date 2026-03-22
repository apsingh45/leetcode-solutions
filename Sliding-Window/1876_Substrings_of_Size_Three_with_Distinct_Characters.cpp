// Time Complexity - O(n)
// Space Complexity - O(1)

// Medium
// Leecode - https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters
class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        int n = s.size();
        for(int i = 0;i<=n-3;i++){
            string a = s.substr(i,3);
            if(a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) count++;
        }
        return count;
    }
};