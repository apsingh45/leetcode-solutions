// Time Complexity - O(n^2)
// Space Complexity -O(n)

// Medium
// Leetcode - https://leetcode.com/problems/binary-trees-with-factors

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,long long>map;
        for(auto a : arr) map[a]++;
        sort(arr.begin(),arr.end());
        int count = 0;
        int MOD = 1e9 + 7;   

        for(int i = 1;i<arr.size();i++){
            for(int j = 0;j<i;j++){
                if(arr[i] % arr[j] == 0){
                    if(map.find(arr[i] / arr[j]) != map.end()){
                        map[arr[i]]=map[arr[i]]+(map[arr[j]]*map[arr[i]/arr[j]]);
                    }
                }
            }
        }

        for(auto &a : map) {
            count = (count + a.second) % MOD;
            }

        return count;
        
    }
};

