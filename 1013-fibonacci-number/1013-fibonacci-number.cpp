class Solution {
public:
//MEMOIZATION 
int memo(int n,vector<int> &dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=memo(n-1,dp)+memo(n-2,dp);
    //dp[n] = memo(n-1, dp) + memo(n-2, dp);
    // return dp[n];
    //easier way to understand this 
}
//TABULATION 
int tablu(int n, vector<int>&dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
//SPACE OPTIMIZATION 
int spaceopt(int n){
    if(n<=1) return n;
    int prev2=0;
    int prev1=1;
    for(int i=2;i<=n;i++){
        int curri=prev2+prev1;
        prev2=prev1;
        prev1=curri;
    }
    return prev1;
}

    int fib(int n) {
        vector<int>dp(n+1,-1);
        // return memo(n,dp);
        // return tablu(n,dp);
        return spaceopt(n);
    }
};