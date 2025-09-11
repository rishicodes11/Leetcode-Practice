class Solution {
public:
    string sortVowels(string s) {
        //brute
        //get all the vowels from the string in another string and sort them first
        // but to get vowels i need to match em so should i create a set or just do if else?
        //since its low i can create a set as it will take n=10 only
        multiset<char>st;
        for(auto it: s){
            if(it=='A'||it=='E'||it=='I'||it=='O'||it=='U'||
            it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
                st.insert(it);
            }
        }
        string t;
        auto ite=st.begin();
        for(auto it:s){
            if(it=='A'||it=='E'||it=='I'||it=='O'||it=='U'||
            it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
                t.push_back(*ite);
                ite++;
            }
            else{
                t.push_back(it);
            }
        }
        return t;
    }
};