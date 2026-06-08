class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {   
    }
    void push(int x) {
        if(st.empty()) st.push({x,x});
        else st.push({x,min(x,st.top().second)});
    }
    
    void pop() {
        if(!st.empty()) st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top().first;
    }
    
    int getMin() {
       if(st.empty()) return -1;
        auto it = st.top();
        return it.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */