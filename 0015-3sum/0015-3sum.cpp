class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       //okay enough shit done 
    //    gotta use for loop as i know for a fact that i have to iterate i after every while loop  
    int n=nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j-1]==nums[j]) j++;
                while(j<k && nums[k+1]==nums[k]) k--;
            }
           else if(sum>0){
            //peeche aao
            k--;
           }
           else{
            //sum<0, aage jao
            j++;
           }
        }

    }
    return ans;
    }
};