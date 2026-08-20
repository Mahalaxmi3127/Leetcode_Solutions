class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int consOdds = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 != 0) {
                consOdds++;
                if (consOdds == 3) {
                    return true;
                }
            } else {
                consOdds = 0;
            }
        }
        return false;
    }
};