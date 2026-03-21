// Time Complexity - O(y + m)
// Space Complexity - O(1)

// Easy
// Leetcode - https://leetcode.com/problems/day-of-the-week

class Solution {
public:
    bool isLeap(int year) {
        return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    }

    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {
            "Friday", "Saturday", "Sunday",
            "Monday", "Tuesday", "Wednesday", "Thursday"
        };

        vector<int> daysInMonth = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        int totalDays = 0;
        for (int y = 1971; y < year; y++) {
            totalDays += isLeap(y) ? 366 : 365;
        }
        for (int m = 1; m < month; m++) {
            if (m == 2 && isLeap(year))
                totalDays += 29;
            else
                totalDays += daysInMonth[m - 1];
        }
        totalDays += day - 1;

        return week[totalDays % 7];
    }
};