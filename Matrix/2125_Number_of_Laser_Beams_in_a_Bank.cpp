// Time Complexity - O(n^2)
// Space Complexity - O(1)

// Medium
// Leetcode - https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        for(int i=0;i<bank.size();i++){
            string s=bank[i];
            int count=0;
            for(int j=0;j<s.length();j++){
                if(s[j]=='1'){
                    count++;
                }
            }
            if(count>0){
                ans.push_back(count);}
            
            
        }
        int result=0;
        if (ans.size() >= 2) {
            for (int i = 0; i < ans.size() - 1; i++) {
                result += ans[i] * ans[i + 1];
            }
        }
        return result;
    }
};