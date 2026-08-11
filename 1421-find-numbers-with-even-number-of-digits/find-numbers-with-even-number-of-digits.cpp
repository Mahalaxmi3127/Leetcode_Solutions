class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i=0;i<nums.size();i++) {
            int num = nums[i];
            string s = to_string(num);
            if (s.length() % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};