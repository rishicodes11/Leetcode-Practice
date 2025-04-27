class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        for(int i=0;i<=nums.size()-3;i++){
            cout<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<endl;
            if((nums[i]+nums[i+2])*2==nums[i+1]) count++;
        }
        return count;
    }
};