class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<int>check(nums);
        sort(check.begin(),check.end());
        int left=0;
        int n=nums.size()-1;
        int right=n;
        int ans1,ans2;
        while(left<right){
            if(check[left]+check[right]==target){
                 ans1=check[left];
                 ans2=check[right];
                 break;
            }
            else if(check[left]+check[right]<target){
                left++;
            }
            else{
                    right--;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans1){
                ans.push_back(i);
                continue;
            }
             if(nums[i]==ans2){
                ans.push_back(i);
                continue;
            }
            
        }
        return {ans};
    }
};