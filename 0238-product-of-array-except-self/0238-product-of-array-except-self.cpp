class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,1);

        for(int i=1;i<n;i++){
            //storing the prefix prod in result first 
            res[i]=nums[i-1]*res[i-1];
        }
        // now for each ellemt we can clulate the suffix product and multilply it with res[i] to get the final ans
        // lets name suffix prodcut as right product rp
        int rp=1;
        for(int i=n-1;i>=0;i--){
            // starting from n-2 as last one is need in calcualtion and it will be same anyways as its right elment is nothing to prod is 1
            res[i]=res[i]*rp;
            rp= rp*nums[i];
        }
        return res;
    }
};