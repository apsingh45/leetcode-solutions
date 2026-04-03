// Time Complexity - O(n^2)
// Space Complexity - O(n)

// Hard
// Leetcode - https://leetcode.com/problems/sum-of-sortable-integers/

class Solution {
public:
    bool isrotation(vector<int>&a,vector<int>&b){
        int k = a.size();
        vector<int>temp = b;
        temp.insert(temp.end(),b.begin(),b.end());

        for(int i = 0;i<k;i++){
            bool flag = true;
            for(int j = 0;j<k;j++){
                if(temp[i+j]!=a[j]){
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
        }
        return false;
    }
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        vector<int>q = nums;
        vector<int>sorted = nums;
        sort(sorted.begin(),sorted.end());

        int ans = 0;

        for(int k = 1;k<=n;k++){
            if(n%k != 0)continue;

            bool a = true;
            for(int i = 0;i<n;i+=k){
                vector<int>b(nums.begin()+i,nums.begin()+i+k);
                vector<int>c(sorted.begin()+i,sorted.begin()+i+k);

                if(!isrotation(b,c)){
                    a = false;
                    break;
                }
            }
            if(a) ans += k;
        }

        return ans;
        
    }
};