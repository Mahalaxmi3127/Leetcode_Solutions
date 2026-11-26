class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set<string> uniqueTrans;
        for (int i=0;i<words.size();i++) {
            string transform="";
            for (int j=0;j<words[i].size();j++) {
                transform=transform+morse[words[i][j]-'a'];
            }
            uniqueTrans.insert(transform);
        }
        return uniqueTrans.size();
    }
};