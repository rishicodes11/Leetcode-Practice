class Solution {
public:
    char kthCharacter(int k) {
        string temp="a";
        while(temp.size()<k){
            cout<<temp.size()<<endl;
            int tenmo=temp.size();
            for(int i=0;i<tenmo;i++){
                if(temp[i]=='z') {temp+='a';}

                else {temp+=(temp[i]+1);
                cout<<"inside else"<<endl;}
                cout<<"inside for"<<endl;
            }
        }
        cout<<temp;
        return temp[k-1];
    }
};