class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(true){

            int sum=0;
            while(n){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            if(sum==1) return true;
            n=sum;
            if(s.count(sum)) return false;
            s.insert(sum);
        }
        return true;
    }
};