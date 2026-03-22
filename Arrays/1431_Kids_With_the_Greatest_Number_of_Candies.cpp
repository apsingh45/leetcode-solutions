// Time Complexity - O(n)
// Space Complexity - O(1)

// Easy
// Leecode - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int max_candies = 0;
        for(int i = 0; i < candies.size();i++){
            max_candies = max(max_candies,candies[i]);
        }
        for(int j = 0;j<candies.size();j++){
            if(max_candies <= candies[j]+extraCandies){
                result.push_back(true);
            }
            else result.push_back(false);
        }
        return result;
    }
};