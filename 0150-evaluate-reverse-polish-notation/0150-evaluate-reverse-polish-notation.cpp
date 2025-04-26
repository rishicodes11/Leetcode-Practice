class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //push till a symbol
        // int res=temp2 sym temp1
        // go till last
        stack<int>st;
        int result;
        for(auto it:tokens){
            if(it!="*" && it!="/" && it!="+" && it!="-"){
                st.push(stoi(it));
            }
            else{
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.pop();
                if(it=="*"){
                    result=temp2 * temp1;
                    st.push(result);
                }
                else if(it=="+"){
                    result=temp2 + temp1;
                    st.push(result);
                }
                else if(it=="-"){
                    result=temp2 - temp1;
                    st.push(result);
                }
                else if(it=="/"){
                    result=temp2 / temp1;
                    st.push(result);
                }
            }
        }
        return st.top();
    }
};