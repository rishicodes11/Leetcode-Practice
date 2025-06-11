class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0) return {0};
        vector<int>result(n+1);
        result[0]=0;
        for(int i=1;i<=n;i++){
            if(i&1){ //odd
        result[i]=result[i/2]+1;
            }
            else{
                result[i]=result[i/2];
            }
        }
        return result;
    }
};