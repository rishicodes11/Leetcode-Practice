class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>new_interval;
        for(auto it: intervals){
            if(new_interval.empty() || it[0] > new_interval.back()[1]){
                //agar khali hai ya interval is like (1,2) (4,6) then
                //basically we cant merge so push only 
            new_interval.push_back(it);
            }
            else{ //push krna hai, first wala min hi rhega as sort kr lia hai
            new_interval.back()[1]=max(new_interval.back()[1],it[1]);

            }
        }
        return new_interval;
    }
};