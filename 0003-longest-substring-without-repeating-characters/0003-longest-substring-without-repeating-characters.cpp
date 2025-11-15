class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            vector<bool>seen(256,0);
            for(int j=i;j<n;j++){
                unsigned char ch= (unsigned char)s[j];
                if(seen[ch]){
                    break;
                }
                seen[ch]=true;
                int len=j-i+1;
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};