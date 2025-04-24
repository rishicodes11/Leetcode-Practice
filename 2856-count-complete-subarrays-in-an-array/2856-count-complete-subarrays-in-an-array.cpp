class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        int c=s.size();
        int i=0;
        int j=0;
        unordered_map<int,int>mp;
        while(j<nums.size()){
            mp[nums[j]]++;

            while(mp.size()==c){
                ans+=(n-j);
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
            }
            j++;
        }
     return ans;   
    }
};