#include<bits/stdc++.h>

using namespace std ;

class MyStack {
public:
    queue<int> temp ;
    int t = -1 ;

    MyStack() {
    
    }
    
    void push(int x) {
        temp.push(x) ;
        t = x ;
    }
    
    int pop() {
        int n = temp.size() ;
        while(n != 1){
            int x = temp.front() ;
            temp.pop() ;
            temp.push(x) ;
            t = x ;
            n-- ;
        }
        int popped = temp.front() ;
        temp.pop() ;
        
        return popped ;
    }
    
    int top() {
        if(temp.empty())
            return -1 ;
        return t ;
    }
    
    bool empty() {
        if(temp.empty())
            return true ;
        return false ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */