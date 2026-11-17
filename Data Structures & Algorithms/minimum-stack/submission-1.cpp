class MinStack {
public:
stack<int> s;
stack<pair<int,int>> mins;
int minimum=INT_MAX;
    MinStack() {
        

    }
    
    void push(int val) {
        s.push(val);
        if(mins.empty()){
            mins.push({val,val}); 

        }
        
        else{
            mins.push({val,min(val,mins.top().second)}); 
        }
    }
    
    void pop() {
        s.pop();
        mins.pop();
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return mins.top().second;
        
    }
};
