class Solution {
public:
//  if (lastIndex[c] >= left)
//This means:
// “The previous occurrence of this character is
// inside our current window [L..R].”


    int lengthOfLongestSubstring(string s) {
        vector<int>lastIndex(256,-1);
        int left=0;
        int maxlen=0;
        for(int right=0;right<s.length();right++){
            unsigned char ch= (unsigned char)s[right];
            if(lastIndex[ch]>=left){
                left=lastIndex[ch]+1;
            }
            lastIndex[ch]=right;
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};