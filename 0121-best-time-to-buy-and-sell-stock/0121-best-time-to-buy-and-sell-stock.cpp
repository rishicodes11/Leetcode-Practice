class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //left=buy
        //right=sell
        int l=0;
        int r=1;
        int maxi=0;
        int n=prices.size();
        while(r<n){
            if(prices[r]<prices[l]){
                l=r;
                r++;
            }else{
                //r>l => go for profit
            int profit= prices[r]-prices[l];
            maxi=max(maxi,profit);
            r++;
            }
        }
        return maxi;
    }
};