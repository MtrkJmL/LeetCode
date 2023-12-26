class MinStack {
public:
    stack<int> ms;
    stack<int> sorted;
    MinStack() {   
    }
    
    void push(int val) {
        ms.push(val); 
        if(!sorted.empty()){
            if(sorted.top()>=val)
                sorted.push(val);
        }
        else
            sorted.push(val);
    }
    void pop() {
        if(ms.top() == sorted.top())
            sorted.pop();
        ms.pop();
    }
    
    int top() {
        return ms.top();
    }
    
    int getMin() {
        return sorted.top();
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