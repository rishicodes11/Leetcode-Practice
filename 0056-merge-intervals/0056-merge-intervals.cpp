class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>new_interval;
        sort(intervals.begin(),intervals.end());
        for(auto it:intervals){
            if(new_interval.size()==0) {
                new_interval.push_back(it);
                continue; //skipping the first one from below if 
                }

            if(it[0]<=new_interval.back()[1]){
                new_interval.back()[1]=max(it[1],new_interval.back()[1]);
            }
            else{
                new_interval.push_back(it);
            }
        }
    return new_interval;
    }
};