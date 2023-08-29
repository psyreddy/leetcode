class MinStack {
    stack<pair<int,int>>s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            if(val<s.top().second){
                s.push({val,val});
            }
            else{
                s.push({val,s.top().second});
            }
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
