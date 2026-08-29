class Solution {
public:
    int longestPalindrome(string s) {
        int a[128] = {0};
        for (char c : s)
            a[c]++;
        int ans = 0;
        for (int i = 0; i < 128; i++) {
            ans += a[i] / 2 * 2;
        }
        if (ans < s.size())
            ans++;
        return ans;
    }
};