class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one_count =0;
        int maxi =0;
        for (int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                one_count++;
            } else {
                maxi = max(maxi,one_count);
                one_count=0;
            }
        }
        return max(maxi,one_count);  
    }
};