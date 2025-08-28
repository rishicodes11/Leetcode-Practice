class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int counter=0;
        int curr=1;
        int prev=0;
        int next=2;
        while(next<nums.size()){
            if(nums[curr]>nums[prev] && nums[curr]>nums[next]){
                counter++;
            }
            else if(nums[curr]<nums[prev] && nums[curr]<nums[next]){
                counter++;
            }
            else if(nums[curr]==nums[next]){
                curr++;
                next++;
                continue;
            }
            prev=curr;
            curr++;
            next++;
        }
        return counter;
    }
};