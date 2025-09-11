class Solution {
public:
    string sortVowels(string s) {
        vector<int> freq(256,0);
        for(char c:s){
            if(isVowel(c)){
                freq[c]++;
            }
        }
        string t;
        for(char c:s){
            if(isVowel(c)){
                for(int ch=0;ch<256;ch++){
                    if(freq[ch]>0){
                        t.push_back((char)ch);
                        freq[ch]--;
                        break;
                    }
                }
            } 
            else{
                t.push_back(c);
            }
        }
        return t;
    }

private:
    bool isVowel(char c){
        return c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
        c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    };
};