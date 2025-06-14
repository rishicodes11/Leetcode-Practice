class Solution {
public:
    int minMaxDifference(int num) {
        //pehle string me convert, then traverse from start, if not 9 make it and similar to it 9, for max and then similar for min make 0
        string s=to_string(num);
        string max=s,min=s;
        char temp; int ind;
        for(int i=0;i<max.size();i++){
            if(max[i]!='9'){
                temp=max[i];
                max[i]='9';
                ind=i;
                break;
            }
        }
        for(int i=ind+1;i<max.size();i++){
            if(max[i]==temp){
                max[i]='9';
            }
        }
       // cout<<max;
       for(int i=0;i<min.size();i++){
            if(min[i]!='0'){
                temp=min[i];
                min[i]='0';
                ind=i;
                break;
            }
        }
        for(int i=ind+1;i<min.size();i++){
            if(min[i]==temp){
                min[i]='0';
            }
        }
        cout<<min;
        return stoi(max)-stoi(min);
    }
};