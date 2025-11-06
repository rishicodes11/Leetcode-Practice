class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums2.size());
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            if(st.empty())ans[i]=-1;
            else  ans[i]=st.top();
            st.push(nums2[i]);
        }
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=ans[i];
        }
        vector<int>finalans(nums1.size());
        for(int i=0;i<nums1.size();i++){
            finalans[i]=mp[nums1[i]];
        }
        return finalans;
    }
};