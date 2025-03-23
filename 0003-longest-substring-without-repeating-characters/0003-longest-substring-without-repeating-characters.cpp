class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>st;
       int i=0;int j=i+1;int maxi=1;int n=s.size();if(n==0) return 0;
       while(j<n && i<n){
         st.insert(s[i]);
        if(st.find(s[j])!=st.end()){ // this means it exits as agar st.find end tak nhi jaa rha menas it exists in the set na 
            st.clear();
            i++;
          if(j<=n-2) j=i+1;
          cout<<j<<" "<<s[j]<<endl;
        }
        else{
           st.insert(s[j]);
             maxi=max(maxi,j-i+1);
             j++;
        }
       } 
       return maxi;
    }
};