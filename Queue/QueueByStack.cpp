#include<bits/stdc++.h>

using namespace std ;

class MyQueue {
public:

    stack<int> temp ;
    stack<int> help ;

    MyQueue() {
        
    }
    
    void push(int x) {
        while(!temp.empty()){
            help.push(temp.top()) ;
            temp.pop() ;
        }
        temp.push(x) ;
        while(!help.empty()){
            temp.push(help.top()) ;
            help.pop() ;
        }
    }
    
    int pop() {
        int popped = temp.top() ;
        temp.pop() ;
        return popped ;
    }
    
    int peek() {
        return temp.top() ;
    }
    
    bool empty() {
        if(temp.empty())
            return true ;
        return false ;
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