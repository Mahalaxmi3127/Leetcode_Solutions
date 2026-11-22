class Solution {
public:
    bool checkString(string s) {
        bool seenB=false;
        for (int i=0;i<s.length();i++) {
            char c=s[i];
            if (c=='b') {
                seenB=true;
            } else if (seenB) {
                return false;
            } 
        }
        return true;
    }
};