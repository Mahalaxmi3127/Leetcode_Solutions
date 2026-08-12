class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            } 

        int vwl = 0, consnt = 0;

        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vwl = max(vwl, freq[i]);
            else
                consnt = max(consnt, freq[i]);
        }

        return vwl + consnt;
    }
};