#include<bits/stdc++.h>

using namespace std ;

class MinStack {
public:

    stack<int> stk ;
    stack<int> min ;

    int m = INT_MAX ;

    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val) ;
        if(val < m)
            m = val ;
        
        min.push(m) ;
    }
    
    void pop() {
        if(!min.empty()){
            min.pop() ;
            if(!min.empty())
                m = min.top() ;
            else
                m = INT_MAX ;
        }
        stk.pop() ;
    }
    
    int top() {
        return stk.top() ;
    }
    
    int getMin() {
        return min.top() ;
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