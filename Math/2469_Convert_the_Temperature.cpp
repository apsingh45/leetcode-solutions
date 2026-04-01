// Time Complexity - O(1)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/convert-the-temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>temp;
        temp.push_back( celsius + 273.15 );
        temp.push_back( celsius * 1.80 + 32.00 );
        return temp;
    }
    
};