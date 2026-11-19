class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<vector<int>>> buckets(rows+cols);
        for (int r=0;r<rows;r++) {
            for (int c=0;c<cols;c++) {
                buckets[abs(r-rCenter)+abs(c-cCenter)].push_back({r,c});
            }
        }
        vector<vector<int>> ans;
        for (auto& b:buckets) {
            ans.insert(ans.end(),b.begin(),b.end());
        }
        return ans;
    }
};