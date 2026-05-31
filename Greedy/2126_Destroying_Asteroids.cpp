// Time Complexity - O(N log N)
// Space Complexity - O(1)

// Medium 
// Leetcode - https://leetcode.com/problems/destroying-asteroids

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long masss = mass;
        
        for(int i = 0;i<asteroids.size();i++){
            if(masss < asteroids[i]){
                return false;
            }
            masss += asteroids[i];
        }
        return true;
    }
};