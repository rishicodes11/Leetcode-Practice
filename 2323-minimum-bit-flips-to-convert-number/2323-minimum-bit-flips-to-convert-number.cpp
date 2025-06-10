class Solution {
public:
    int minBitFlips(int start, int goal) {
     int res=start^goal;
        // now find the number of set bits in the res;
        // it is like do and of n and n-1 and count++; 
        int count=0;
        while(res){
            res=(res) & (res-1);
            count++;
        }
        return count;
    }
};