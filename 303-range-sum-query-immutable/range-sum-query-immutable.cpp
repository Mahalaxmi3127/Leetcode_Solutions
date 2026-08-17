class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        int rs=0;
        prefix.resize(nums.size());
        for (int i=0;i<nums.size();i++) {
            rs +=nums[i];
           prefix[i]=rs;
        }   
    }
    int sumRange(int left, int right) {
        if(left == 0)
            return prefix[right];
        return prefix[right]-prefix[left-1];
    }
};