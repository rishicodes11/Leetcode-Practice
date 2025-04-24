class MinStack {
      stack<int> st;
      stack<int> minst;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty() || val<minst.top()){
            minst.push(val);
        }
        else{
            minst.push(minst.top());// prev small hi push kr dia
        }
    }
    
    void pop() {
        if(!st.empty()) {
            st.pop();
            minst.pop();
            }
    }
    
    int top() {
        if(!st.empty()) return st.top();
        return -1;
    }
    
    int getMin() {
        if(!minst.empty()) return minst.top();
        return -1;
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