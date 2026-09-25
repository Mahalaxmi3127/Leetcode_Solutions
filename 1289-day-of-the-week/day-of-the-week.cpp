class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string d[] = {
            "Sunday", "Monday", "Tuesday", "Wednesday",
            "Thursday", "Friday", "Saturday"
        };
        int t = 0;
        for (int i = 1971; i < year; i++) {
            t += 365;
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
                t++;
        }
        int m[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            m[1] = 29;
        for (int i = 0; i < month - 1; i++)
            t += m[i];
        t += day - 1;
        return d[(t + 5) % 7];
    }
};