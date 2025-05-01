class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // first approach will be double for loop with digit checking every instance
        // or like go to each num, conveett it to string, get its length , if its divisbke by 2 then count++;
        // time omolexity will be o(N*d) d is length iof longest digit 
        //scond should be?
        //log but idk how to use that 
        // log thing only works for positive
        //floor value is liek 2.95 ka floor is 2
        int count=0;
        for(auto num:nums){
            int numofdigi=floor(log10(num))+1;
            if(numofdigi%2==0) count++;
        }
        return count;
    }
};