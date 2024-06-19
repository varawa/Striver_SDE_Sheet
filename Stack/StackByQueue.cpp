#include<bits/stdc++.h>

using namespace std ;

class MyStack {
public:
    queue<int> temp ;

    MyStack() {
    
    }
    
    void push(int x) {
        temp.push(x) ;
        int s = temp.size() ;
        while(s != 1){
            temp.push(temp.front()) ;
            temp.pop() ;
            s-- ;
        }
    }
    
    int pop() {
        int popped = temp.front() ;
        temp.pop() ;
        return popped ;
    }
    
    int top() {
        if(temp.empty())
            return -1 ;
        return temp.front() ;
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