// Time Complexity - O(n)
// Space Complexity - O(n)

// Easy
// Leecode - https://leetcode.com/problems/count-square-sum-triples

class Solution {
public:
    int countTriples(int n) {
        unordered_map<int,int>map;
        int count = 0;
        for(int i = 1;i<=n;i++){
            map[i*i] = i; 
        }

        for(int i = 1;i<=n;i++){
            for(int j = 1 ;j<=n;j++){
                int a = (i*i)+(j*j);
                if(map.find(a) != map.end()) count++;
            }
        }
        return count;

    }
};