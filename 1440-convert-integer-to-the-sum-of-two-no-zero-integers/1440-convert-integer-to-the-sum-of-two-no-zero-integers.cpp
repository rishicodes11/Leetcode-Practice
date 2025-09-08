class Solution {
public:

    bool check(int n){
        while(n){
        int digit=n%10;
        if(digit==0) return false;
        n/=10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        // basically loop and check if it has any digit as 0 or not
        for(int i=1;i<n;i++){
            if(check(i) && check(n-i))
            return {i,n-i};
        }
        return {};
    }
};