// Time Complexity - (n log n)
// Space Complexity - O(n)

// Medium 
// Leetcode - https://leetcode.com/problems/closest-equal-element-queries

class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int, vector<int>> indexMap;
        vector<int> result;
        int n = nums.size();

        for (int i = 0;i < n;i++){
            indexMap[nums[i]].push_back(i);
        }

        for(int q : queries){
            vector<int>& indices = indexMap[nums[q]];

            if (indices.size() == 1) {
                result.push_back(-1);
                continue;
            }

            int closest = INT_MAX;

            auto it = lower_bound(indices.begin(), indices.end(), q);

            if (it != indices.end()){
                if(*it != q){
                    int d = abs(*it - q);
                    closest = min(closest,min(d,n-d));
                } 
                else if(it + 1 != indices.end()){
                    int d = abs(*(it + 1) - q);
                    closest = min(closest, min(d,n-d));
                }
            }

            if(it != indices.begin()){
                int prev = *(it - 1);
                if(prev != q){
                    int d = abs(prev-q);
                    closest = min(closest, min(d,n-d));
                }
            }

            int first = indices[0];
            int last = indices.back();

            if(first != q){
                int d = abs(first - q);
                closest = min(closest, min(d,n-d));
            }

            if(last != q){
                int d = abs(last - q);
                closest = min(closest, min(d,n-d));
            }

            result.push_back(closest);
        }
        return result;
    }
};