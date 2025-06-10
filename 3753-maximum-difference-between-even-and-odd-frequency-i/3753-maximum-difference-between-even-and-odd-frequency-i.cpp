class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        int maxodd=-1;
        int mineven=INT_MAX;
        for(const auto& p: mp){
            int val=p.second;
            if(val&1){
                maxodd=max(val,maxodd);
            }
            else{
                mineven=min(val,mineven);
            }
        }
        return maxodd-mineven;
    }
};