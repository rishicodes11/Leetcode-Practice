class Solution {
public:
    int getSum(int a, int b) {
        //obsidian bit manipulation notes
        if(b==0) return a;
        int carry=(a & b)<<1;
        int sum=a^b;
        return getSum(sum,carry);
    }
};