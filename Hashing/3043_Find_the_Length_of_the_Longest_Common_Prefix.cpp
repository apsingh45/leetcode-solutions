// Time Complexity - O(N*D + M*D)
// Space Complexity - O(N*D + M*D)

// Medium
// Leetcode - https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string,int>mp;

        for(int a : arr1){
            string s = to_string(a);
            string p = "";
            for(int i = 0;i < s.size();i++){
                p += s[i];
                mp[p]++;
            }
        }
        int ans = 0;
        for(int a : arr2){
            string s = to_string(a);
            string p = "";
            for(int i = 0;i < s.size();i++){
                p += s[i];
                if(mp.find(p) != mp.end()){
                    int size_p = p.size();
                    ans = max(ans,size_p);
                }
            }
        }
        return ans;
    }
};