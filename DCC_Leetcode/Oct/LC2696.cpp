#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minLength(string s) {
        stack<char> stk ;
        int i = s.length() - 1 ;
        while(i >= 0){
            if(!stk.empty() && stk.top() == 'D' && s[i] == 'C')
                stk.pop() ;
            else if(!stk.empty() && stk.top() == 'B' && s[i] == 'A')
                stk.pop() ;
            else
                stk.push(s[i]) ;
            i-- ;
        }
        while(!stk.empty()){
            i++ ;
            stk.pop() ;
        }

        return i + 1 ;
    }
};