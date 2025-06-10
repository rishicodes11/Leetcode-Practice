class Solution {
public:
    int minBitFlips(int start, int goal) {
     int res=start^goal;
        // now find the number of set bits in the res;
        // or like increase count for each set bit, checking from right  
        int count=0;
        for(int i=0;i<32;i++){
            if(res & 1<<i) count++;
        }
        return count;
    }
};