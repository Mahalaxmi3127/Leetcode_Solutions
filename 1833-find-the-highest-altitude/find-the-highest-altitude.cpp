class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        int high = 0;
        for (int i = 0; i < gain.size(); i++) {
            alt = alt + gain[i];
            if (alt > high) {
                high = alt;
            }
        }
        return high;
    }
};