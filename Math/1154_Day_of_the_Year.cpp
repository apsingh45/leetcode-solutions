// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/day-of-the-year

class Solution {
public:
    int dayOfYear(string date){
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        vector <int> days = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            days[1]=29;
        }
        int result = 0;
        for ( int i = 0 ; i < month - 1 ; i++) {
            result = result + days[i];
        }
        return result + day ;
    }
};