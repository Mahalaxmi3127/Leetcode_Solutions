class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0) , days;
        for (int i = 0; i < n; i++) {
            while (!days.empty() && temperatures[i] > temperatures[days.back()]) {
                int indx = days.back();
                days.pop_back();

                ans[indx] = i - indx;
            }
            days.push_back(i);
        }
        return ans;
    }
};