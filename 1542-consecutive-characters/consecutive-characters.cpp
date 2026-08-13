class Solution {
public:
    int maxPower(string s) {
        int curr = 1;
        int maxi = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                curr++;
            }
            else {
                curr = 1;
            }
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};