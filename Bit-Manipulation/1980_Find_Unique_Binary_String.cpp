// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Medium
// Leecode - https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
    string intToBinary(int num, int n) {
    string s(n, '0');

    for(int i = n-1; i >= 0; i--) {
        s[i] = (num % 2) + '0';
        num /= 2;
    }

    return s;
}
    string findDifferentBinaryString(vector<string>& nums) {
        set<int>a;
        for(int i = 0;i<nums.size();i++){
            a.insert(stoi(nums[i],0,2));
        }

        int n = pow(2,nums.size());

        for(int i = 0;i<n;i++){
            if(a.find(i) == a.end()){
                return intToBinary(i,nums.size());
            }
        }
        return "";
    }
};