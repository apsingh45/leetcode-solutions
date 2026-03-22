// Time Complexity - O(n + y)
// Space Complexity - O(y)

// Easy
// Leecode - https://leetcode.com/problems/maximum-population-year

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[101]={0};
        for (int i=0;i<logs.size();i++){
            if(logs[i][0]!=0){
                arr[logs[i][0]-1950]++;
            }
            if(logs[i][1]!=0){
                arr[logs[i][1]-1950]--;
            }
        }
        
        for(int j=1;j<101;j++){
            arr[j]=arr[j]+arr[j-1];
        }

        int max=0;
        for(int a=0;a<100;a++){
            if(arr[a]>max){
                max=arr[a];
            }
        }
        int year=1950;

        for(int k=0;k<101;k++){
            if(arr[k]==max){
                year=1950+k;
                break;
            }
        }
    return year;
    }
};