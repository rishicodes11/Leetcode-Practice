class MinStack {
      stack<int> st;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()) st.pop();
        else{
            return;
        }
    }
    
    int top() {
        if(!st.empty()) return st.top();
        return -1;
    }
    
    int getMin() {
        int mini=INT_MAX;
        stack<int>temp=st;
        while(!temp.empty()){
            mini=min(mini,temp.top());
            temp.pop();
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */