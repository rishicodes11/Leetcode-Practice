class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        //basically we optimised it for space stuff 
        sort(nums.begin(),nums.end());
        int sum=0;
        int start=nums[0][0],end=nums[0][1];
        for(int i=0;i<nums.size();i++){
            if(nums[i][0]<=end){
                end=max(end,nums[i][1]);
            }
            else{
                sum+=end-start+1;
                start=nums[i][0];
                end=nums[i][1];
            }
        }
        sum+=(end-start+1);
        return sum;
    }
};