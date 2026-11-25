class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& pts) {
        sort(pts.begin(),pts.end());
        int ans=0;
        for (int i=1;i<pts.size();i++) {
            ans = max(ans,pts[i][0]-pts[i-1][0]);
        }
        return ans;
    }
};