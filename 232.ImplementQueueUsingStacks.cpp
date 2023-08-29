class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int n = s1.size();
        for(int i=0;i<n-1;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int temp = s1.top();
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
    
    int peek() {
        int n = s1.size();
        for(int i=0;i<n-1;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int temp = s1.top();
        s2.push(temp);
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */