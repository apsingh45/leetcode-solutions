// Time Complexity - O(n1 log n1 + n2)
// Space Complexity - O(n1)

// Easy
// Leetcode - https://leetcode.com/problems/relative-sort-array

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;
        unordered_map<int,int>map;
        for(int a : arr1){
            map[a]++;
        }
        int a = 0;
        for(int i = 0;i<arr2.size();i++){
            int n = map[arr2[i]];
            while(n){
                result.push_back(arr2[i]);
                n--;
                map[arr2[i]]--;
                a++;
            }
        }
        for(auto &a : map){
            while(a.second > 0){
                result.push_back(a.first);
                a.second--;
            }
        }

        sort(result.begin()+a,result.end());
        return result;

    }
};