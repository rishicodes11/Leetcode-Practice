class Solution {
public:
    int hammingDistance(int x, int y) {
        // same as like number of flips x need to reach y or vice verca. lets do vice verca only
        int res= y^x; // yhi pe khaam lol x^y will also be the same ig
        int count=0;
        while(res){
            res=res & (res-1);
            count++;
        }
        return count;
    }
};