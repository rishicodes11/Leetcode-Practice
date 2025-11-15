class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // should i contniue with the sum or should i start fresh from here
        // while keeping in mememory the largest sum
        // that is kadane for us
        int maxSum=-10000;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxSum= max(maxSum+nums[i],nums[i]);
            ans=max(ans,maxSum);
        }
        return ans;
    }
};