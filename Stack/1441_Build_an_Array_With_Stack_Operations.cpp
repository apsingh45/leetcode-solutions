// Time Complexity - O(n log n)
// Space Complexity - O(n)

// Medium
// Leecode - https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>result;
        set<int>s(target.begin(),target.end());
        for(int i = 1;i<=n && i<=target[target.size()-1];i++){
            result.push_back("Push");
            if(s.find(i) == s.end()){
                result.push_back("Pop");
            }
        }
        return result;
    }
};