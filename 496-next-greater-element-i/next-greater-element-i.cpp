class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int , int> nextGreaterMap;
        stack<int> st;
        for (int i=nums2.size()-1;i>=0;i--) {
            int curr=nums2[i];
            while (!st.empty() && st.top()<=curr) {
                st.pop();
            }
            if (st.empty()) {
                nextGreaterMap[curr]=-1;
            } else {
                nextGreaterMap[curr]=st.top();
            }
            st.push(curr);
        }
        vector<int> ans;
        for (int num:nums1) {
            ans.push_back(nextGreaterMap[num]);
        }
        return ans;
    }
};