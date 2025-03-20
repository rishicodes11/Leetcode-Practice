class Solution {
public:
    bool isPalindrome(int x) {
        // agar -ve hai to return 0
        if(x<0)  return 0;

        string str= to_string(x);
        cout<<str;
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]) return 0;
            i++;
            j--;
        }

        return 1;
    }
};