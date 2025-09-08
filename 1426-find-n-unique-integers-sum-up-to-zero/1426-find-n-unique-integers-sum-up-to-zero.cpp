class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1) return {0};
        vector<int>ans;
        if(n%2==0){
            int i=1;
            while(n){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
                n=n-2;
            }
        }
        else{
            ans.push_back(0);
            n--;
            int i=1;
            while(n){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
                n=n-2;
            }
        }
        return ans;
    }
};