class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);
        for (auto booking : bookings) {
            int fst = booking[0];
            int lst = booking[1];
            int seats = booking[2];
            diff[fst - 1] += seats;
            diff[lst] -= seats;
        }
        vector<int> ans(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += diff[i];
            ans[i] = sum;
        }
        return ans;
    }
};