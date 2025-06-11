class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
     for(int i=0;i<32;i++){
        uint32_t lsb= n&1;
        uint32_t reverselsb= lsb<<(31 - i);
        result= result | reverselsb;
        n=n >> 1; // n ko right shift krke aage chal lo 
     }   
     return result;
    }
};