class MinStack {
    vector<pair<int,int>>m;
   
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(m.empty()){
        m.push_back({val,val});
        }
       else{
        m.push_back({val,min(m.back().second,val)});
       }
    }
        
    
    void pop() {
        m.pop_back();
        
    }
    
    int top() {
        return m.back().first;
    }
    
    int getMin() {
        return m.back().second;
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