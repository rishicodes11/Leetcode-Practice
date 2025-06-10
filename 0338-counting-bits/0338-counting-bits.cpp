class Solution {
public:
    vector<int> countBits(int n) {
        //basially return an array with number of set bits from 0 to n
        // so n log n solution is easy as we gotta do for loop and then whie(n) loop to get the set bits and then put it in the array, the question demands us to do this in O(n) , in a single fucking pass,ill do the basic first aand then think 
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int temp=i;
            int count=0;
            while(temp){
                temp= temp & temp-1;
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};