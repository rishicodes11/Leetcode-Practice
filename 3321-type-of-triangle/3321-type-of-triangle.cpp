class Solution {
public:
    string triangleType(vector<int>& nums) {
        int flag=0;
        string ans;
       if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[2]+nums[0]>nums[1]) flag=1;
       if(flag==0) return "none"; 
        if(nums[0]==nums[1]&& nums[1]==nums[2]) return "equilateral";
        if(nums[0]==nums[1] || nums[1]==nums[2]|| nums[2]==nums[0]) return "isosceles";
        if(nums[0]!=nums[1]&& nums[1]!=nums[2] && nums[2]!=nums[0]) return "scalene";

        return ans;
    }
};