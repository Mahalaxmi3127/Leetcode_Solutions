class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        int rs=0;
        for (int i=0;i<nums.size();i++) {
            rs +=nums[i];
            prefix.push_back(rs);
        }   
    }
    int sumRange(int left, int right) {
        if(left == 0)
            return prefix[right];
        return prefix[right]-prefix[left-1];
    }
};