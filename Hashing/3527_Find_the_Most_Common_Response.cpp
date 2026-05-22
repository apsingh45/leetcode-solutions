// Time Complexity - O(N^2)
// Space Complexity - O(N)

// Medium 
// Leetcode - https://leetcode.com/problems/find-the-most-common-response

class Solution {
public:
    string findCommonResponse(vector<vector<string>>& response) {
        map<string,int>mp1;

        for(int i = 0;i<response.size();i++){
            map<string,int>mp2;
            for(int j = 0;j<response[i].size();j++){
                if(mp2.find(response[i][j]) != mp2.end()) continue;
                else{
                    mp1[response[i][j]]++;
                }
                mp2[response[i][j]]++;
            }
        }

        string ans = "";
        int a = 0;

        for(auto &p : mp1){
            if(p.second > a){
                a = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};