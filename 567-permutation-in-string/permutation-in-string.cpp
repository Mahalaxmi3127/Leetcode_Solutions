class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;
            vector<int> cnt1(26, 0),cnt2(26, 0);
            for (int i = 0; i < s1.size(); i++) {
                 char c = s1[i];
                 cnt1[c - 'a']++;
                 }
            int wndwSize = s1.length();
            for (int i = 0; i < wndwSize; i++) {
                cnt2[s2[i] - 'a']++;
                }
            if (cnt1 == cnt2) {
                return true;
            }
            for (int i = wndwSize; i < s2.length(); i++) {
                cnt2[s2[i] - 'a']++;
                cnt2[s2[i - wndwSize] - 'a']--;
            if (cnt1 == cnt2) {
                return true;
            }
        }
        return false;
    }
};