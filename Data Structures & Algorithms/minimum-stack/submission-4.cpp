class MinStack {
public:
    stack<long long> s;
    long long minimum=INT_MAX;
    MinStack() {
        
    }
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minimum=val;
        }
        else{
            if(minimum>val){
                s.push(2LL*val-minimum);
                minimum=val;
            }
            else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(minimum>s.top()){
            minimum=2LL*minimum-s.top();
            s.pop();
        }   
        else{
            s.pop();
        }
    }
    
    int top() {
        if(minimum>s.top()){
            return minimum;
        }
        return s.top();
        
    }
    
    int getMin() {
        return minimum;
        
    }
};
