class Solution {
public:
// SUBARRAYS ARE NOT SUBSET, DONT FORGET 
// ✅ Key Difference:
//	•	Subarray → contiguous, count = n(n+1)/2.
//	•	Subset → any combination, count = 2^n.
//
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;// total no of possible answers 
        long long c=0;// counter to keep streak of zeros 
        for(auto it: nums){
            if(it==0){
                c++;
                ans+=c;
            }
            else c=0;
        }
        return ans;
    }
};