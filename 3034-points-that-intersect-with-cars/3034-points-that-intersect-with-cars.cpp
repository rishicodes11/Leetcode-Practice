class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
     //merege intervals
     // traverse again 
     //count total no of points
     //subtract it from the max one ie new_interval.back()[1]; 
     //nah this subtract one is not needed 
     //but like fuck it if i do it like this it will take on tc+ and on sc but i want o1 sc, lets see what i can do 
    //brute
    // (1,2) (4,6)
    sort(nums.begin(),nums.end());
    vector<vector<int>>new_interval;
    for(auto &it: nums){
        if(new_interval.size()==0 || it[0] > new_interval.back()[1] ){
            new_interval.push_back(it);
        }
        else{
            new_interval.back()[1]=max(new_interval.back()[1],it[1]);
        }
    }
    // now we have the new interval
    // traverse over it and get total points
    int sum=0;
    for(auto it: new_interval){
        sum+= (it[1]-it[0]+1);
    }
    return sum;
    }
};