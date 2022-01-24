class MinStack {
    vector<int>m;
    vector<int>s;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push_back(val);
       if(m.size()!=0){
        int num=min(m[m.size()-1],val);
        m.push_back(num);
       }
        else{
            m.push_back(val);
        }
    }
    
    void pop() {
        m.pop_back();
        s.pop_back();
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        return m[m.size()-1];
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