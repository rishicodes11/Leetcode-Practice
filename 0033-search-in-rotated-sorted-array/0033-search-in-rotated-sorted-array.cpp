// learn to see patterns 
// 0 1 2 3 4 5 6 7 start<end--> full sort no roation also sorted till mid sure
// 1 2 3 4 5 6 7 0 start<mid ---> sorted till mid
// 2 3 4 5 6 7 0 1 " "
// 3 4 5 6 7 0 1 2 " "
// 4 5 6 7 0 1 2 3 " "
// 5 6 7 0 1 2 3 4 start NOT < mid--> sorted from mid 
// 6 7 0 1 2 3 4 5
// 7 0 1 2 3 4 5 6
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]) return mid;
            if(nums[start]<=nums[mid]){
                if(target<nums[mid] && target>=nums[start]){// means its bw start and mid
                end=mid-1;
                }
                else{ // target not < mid or less then nums[start]
                start=mid+1;
                }
            }
            else{ //start not< mid
                if(target>nums[mid] && target<=nums[end]){
                    start=mid+1;
                }
                else{ // target<mid search till mid
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};