class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3) return nums[0]*nums[1]*nums[2];
        int n=nums.size();
        //brutally bruteforce
       // Tip : If the array in its "sorted form" looks like

       //  ex: [-a, -b, -c, d ......... x, y, z]
      //  The answer will be: Max(abz, xyz)

      //  Note: You need not sort the array to find the answer.
        sort(nums.begin(),nums.end());
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};