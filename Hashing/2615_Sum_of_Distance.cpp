// Time Complexity - O(n)
// Space Complexity - O(n)

// Medium
// Leetcode - https://leetcode.com/problems/sum-of-distances

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long>result(n,0);
        unordered_map<int,vector<int>> mp;

        for(int i = 0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        for(auto &a : mp){
            vector<int>& v = a.second;
            int m = v.size();

            vector<long long>p(m);
            p[0] = v[0];
            for(int i = 1;i < m;i++){
                p[i] = p[i-1] + v[i];
            }

            for(int k = 0;k < m;k++){
                long long left = 0;
                long long right = 0;

                if(k > 0){
                    left = (long long)k *v[k] - p[k-1];
                }
                if (k < m-1){
                    right = (p[m-1] - p[k]) 
                            - (long long)(m-k-1) * v[k];
                }
                result[v[k]] = left + right;
            }
        }
        return result;
    }
};